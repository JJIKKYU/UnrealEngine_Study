# 3장_ 메모리 관리와 스마트 포인터

Subject: C++로 개발하는 언리얼엔진  
기한: Aug 07, 2019  

---

# 1. 관리되는 메모리 - NewObject<> 사용

UE4는 메모리 관리가 자동으로 수행된다.  
엔진 내에서 사용할 객체의 할당은 `NewObject<>()` 또는 `SpawnActor<>()`를 사용한다.  

객체의 해체는 객체에 대한 참조를 제거한 다음 때떄로 가비지 정리 루틴을 호출함.

Actor 클래스의 파생 클래스가 아닌  
**UObject 파생 클래스**를 생성해야 하는 경우 항상 `NewObject<>()`를 사용해야 한다.

`SpawnActor<>()`를 사용할 때는 **객체가 Actor나 Actor를 상속받은 객체**여야만 한다.

## 1-1. 구동방법

    UCLASS(BlueprintType, Blueprintable, meta=(ShortTooltip="Baseclass for any Action type"))
    Class BasicStudy_APO UAction : public UObject
    {
    	GENERATED_UCLASS_BODY()
    
    public:
    
    	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
    	FString Text;
    
    	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
    	FKey ShortcutKey;
    };

**UAction 클래스의 인스턴스를 생성**하고자 할 경우 아래와 같이 수행한다.

    UAction* action = NewObject<UAction>(GetTransientPackage(),
    UAction::StaticClass() /* RF_ * flags */ );

## 1-2. 구동원리

여기서 `UAction::StaticClass()` 는 UAction 객체의 기본 UClass*를 가져온다.  

`NewObject<>`의 첫 번째 인수 `GetTransientPackage()` 는 게임의 일시적인 패키지를 검색한다.  
블루프린트를 이용해 UPROPERTY() TSubClassOf<AActor>를 사용해서 UClass 인스턴스 선택 가능  

세번째 인수(선택사항)은 UObject가 메모리 관리 시스템에 의해 처리되는 방법을 나타내는  
매개변수의 조합이다.

RF_flag에 관한 추가 정보는 [여기](http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Objects/Creation/)에서 확인할 수 있다.

# 2. 관리되는 메모리 - 메모리 해체

**UObject들은 참조 횟수가 카운트**되고,  
UObject **인스턴스에 대한 참조가 더 이상 없는 경우 가비지 컬렉션**된다.

`NewObject<>`를 사용해 **UObject 상속 클래스를 메모리 할당**한 경우  
`UObject::ConditionalBeginDestroy()` 멤버 함수를 호출해 **수동으로 해체**할 수 있다.

**주의사항**

다른 객체 포인터들로부터 여전히 메모리에서 참조하고 있는 객체에 대해서는  
`UObject::ConditionalBeginDestroy()`를 호출하지 않도록 주의해야한다.

## 2-1. 구동방법

    UObject *o = NewObject<UObject>( ... );
    o->ConditionalBeginDestroy();

# 3. 관리되는 메모리 - 스마트포인터
(TSharePtr, TWeakPtr, TUniquePtr)로 객체 추적하기

자신이 만든 표준 C++ 객체에 대한 delete호출을 까먹을 일이 있을 수 있다.  
이를 방지하기 위해서 사람들은 스마트 포인터를 사용해 메모리 누수를 방지한다.

`TSharedPtr`은 **UObject 상속 클래스를 제외하고** 모든 사용자 정의 C++ 객체를  
참조 카운팅하는 매우 유용한 C++ 클래스다.

`TWeakPtr`은 **객체의 삭제를 방지할 수 없는 이상한 속성**을 가진  
참조 카운트된 객체를 가리키기 위해 제공한다.

**스마트 포인터별 특징**

- `TSharedPtr`

    스레드에서 안전한 공유 객체를 나타내는 참조/계수 포인터 유형을 제공한다.  
    (템플릿에 대한 두 번째 인수로 `ESPMode::ThreadSafe` 제공)  
    공유 객체는 **더 이상 참조가 없을때 할당 해제**된다.

- `TUniquePtr`

    스레드에서 안전하지 않은 유니크 포인터, **복사 생성자가 호출될 경우**  
    소유권이 이전된다.

## 3-1. 구동방법

C++ 원시 포인터를 가져와서 `TSharedPtr`, `TSharedRef`, `TWeakPtr`, `TUniquePtr` 중  
하나의 생성자를 호출하면 된다.

    // C++ 클래스, UObject로부터 상속받지 않았다.
    class MyClass() { };
    TSharedPTr<MyClass>SharedPtr(new MyClass() );

## 3-2. 구동원리

Weak 포인터는 참조 횟수가 0으로 떨어지면 객체를 메모리에 유지할 수 없다.

Weak 포인터를 사용할 때 이점은,  
Weak 포인터 아래의 객체가 (`ConditionalBeginDestroy()`를 사용해) 수동으로 삭제될 때  
**Weak 포인터의 참조는 NULL참조**가 된다.

이때 아래와 같이 리소스가 여전히 올바르게 해당되었는지 다음과 같이 검사할 수 있다.

    if ( ptr.IsValid() )
    {
    }

## 3-3. 주의사항

**사용자 작성 C++ 클래스에서만 사용 가능**하고 UObject, UObject 파생 클래스와 함께  
`TSharedRef`를 사용할 수 없음을 기억할 것!

사용자 정의된 구조체에서 `TSharedPtr`, `TSharedRef`, `TWeakPtr` 클래스 중 하나를 사용해  
원시 포인터를 해체할 수 있다.

UObject는 `TWeakObjectPtr`, `TStrongObjectPtr` 또는 `UPROPERTY()`를 시작으로 사용하거나  
스마트 포인터를 사용해 객체를 가리켜야한다.

# 4. TUniquePtr를 사용해 객체 추적하기

`TUniquePtr`을 **스코프 포인터**로 사용할 수 있다.  
스코프포인터란 블록이 선언된 블록에 끝에서 자동삭제되는 포인터이다.  

간단하게 `}` 가 나타날 때까지만 존재한다고 생각하면 된다.

    // ex
    
    {
    	int x;
    	{
    		int y;
    	} // y가 끝나는 스코프
    } // x가 끝나는 스코프

참조된 객체가 `{ ... }` 동안 유지되는것이 중요할 때 사용한다.  
즉, 한 함수의 몸체에서 **"너는 꼭 살아남아야 한다!"** 라고 생각할 때 사용할 것!

## 4-1. 구동방법

    TUniquePtr<AWarrior> warrior(this);

`TUniquePtr` 꺾쇠 괄호 안에 선언된 **<AWarrior> 유형의 객체를 참조**하는 포인터를 선언한다.

## 4-2. 구동원리

`TUniquePtr` 변수 유형은 가리키는 변수에 참조 카운트를 자동으로 추가한다.  
이렇게 하면 `TUniquePtr<>`**변수가 해체되기 전까지는 기본 객체의 할당이 해제되지 않는다.**

# 5. 언리얼의 가비지 컬렉션 시스템과 UPROPERTY()

`UCLASS()`의 맴버로 예를 들어 `TArray<>`가 있을 때,  
블루프린트에서 **편집하지 않더라도 해당 맴버를** `UPROPERTY()`**로 선언**해야 한다.

그렇지 않으면 TArray가 제대로 할당되지 않는다.

## 5-1. 구동방법

    UCLASS()
    class MYPROJECT_API AWarrior : public AActor
    {
    	TArray<FSoundEffect> Greets; // 틀리다.
    
    	UPROPERTY()
    	TArray(FSoundEffect> Greets; // 맞다
    };

## 5-2. 구동원리

`UPROPERTY()` 선언은 TArray가 **적절히 메모리 관리 해야됨을 UE4에 알려주는 역할**을 한다.  
`UPROPERTY()` 선언이 없을 경우 TArray에 있는 UObject의 **가비지 컬렉션이 제대로 동작하지 않는다.**

# 6. 가비지 컬렉션의 강제 수행

대부분 UE4의 가비지 컬렉션에 의해 메모리 정리가 수행되지만,  
큰 레벨을 로드하거나 메모리를 비워주어야 할 때가 있다.  
이럴 때는 다음 코드를 호출하면 된다.

    GetWorld()->ForceGarbageCollection( true );

# 7. 중단점과 단계적 코드 실행

Visual studio에서 디버깅할 때 했던 빨간 점(F9)를 기억한다면, 그걸로 하면 된다!

그리고 F5를 눌러 코드를 실행하고, F11과 F10을 눌러가면서 단계적으로 코드를 실행할 수 있다.

# 8. 버그 찾기와 콜 스택 사용

일시 중지하려는 위치에 중단점을 추가해 아래 순서대로 진행한다.

1. F5를 눌러 코드를 실행하고 버그가 발생한 지점으로 코드를 실행한다.  
예를 들어 아래와 같은 코드를 추가한다.
2. 두 번째 줄에서 코드가 일시 중지된다. (`o→GetName()`)
3. 코드가 일시 중지되면 콜 스택창 (디버그 - 창 - 호출스택) 으로 이동한다.

    UObject *o = 0; // Initialize to an illegal null pointer o->GetName();
    // Try and get the name of the object (Has bug)