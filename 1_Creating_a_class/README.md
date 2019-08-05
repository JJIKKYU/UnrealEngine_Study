# 2장_ 클래스 생성하기

Subject: C++로 개발하는 언리얼엔진
기한: Aug 05, 2019
분야: 언리얼엔진
상황: 진행중👀

---

# 1. 클래스 생성하기

## 1. `UCLASS`

---

일반적인 클래스의 한 단계 위(graduated)을 UCLASS라 칭한다.
이 UCLASS 매크로를 잘 작성하면 블루프린트가 가능한 UCLASS를 작성하는 게 가능하다.

블루프린트가 가능한 UCLASS를 만드는 이점은 텍스트 필드, 슬라이더 및 모델 선택 박스같은
편리한 UI 위젯을 사용해 사용자 정의 C++ 객체가 블루프린트들이 시각적으로 편집 가능한
속성(UPROPERTY)을 가질 수 있다는 것이다.

사용자 정의 C++ 객체를 UCLASS로 선언해 UE4 클래스처럼 동작하는 사용자 정의
C++ 클래스를 선언할 수 있다. 이럴 경우 UCLASS는 스마트 포인터 규칙에 의해
메모리 할당과 해제관련된 메모리관리 루틴를 사용하고, 에디터에서 로드되고 읽을 수 있으며
블루프린트에서 마음대로 접근할 수 있다.

> **스마트 포인터가 마음에 든다면 UCLASS가 더 안전한 코드를 만들 뿐 아니라
전체 코드베이스를 더욱 응집력 있고 일관되게 만든다.**

## 2. 구동원리

---

    // Fill out your copyright notice in the Description page of Project Settings.
    
    #pragma once
    
    #include "CoreMinimal.h"
    #include "UObject/NoExportTypes.h"
    **#include "UserProfile.generated.h" // UCLASSNAME.generated.h가 맨 마지막에!**
    
    /**
     * 
     */
    UCLASS()
    class BASICSTUDY_API UUserProfile : public UObject
    {
    	GENERATED_BODY()
    	
    };

위처럼 `UCLASSNAME.generated.h` 가 가장 마지막에 `#include` 되어야 한다!

## 3. `UCLASS` 동작 방식 수정 방법

---

- `Blueprintable`

    UE4 에디터상 Class Viewer에서 블루프린트를 만들 수 있다는 의미.

    ![](Untitled-db0bf18e-1d3a-4d9d-8d1e-3dd310e11b13.png)

- `BLueprintType`

    이 키워드를 사용한 UCLASS를 다른 블루프린트에서 변수로 사용할 수 있다.
    `NotBLueprintType`을 지정하면 블루프린트 다이어그램에서 변수로 사용할 수 없다.
    Class Viewer에서 블루프린트 클래스 생성이 표시되지 않는다.

## 4. 사용자 편집 가능한 `UPROPERTY` 만들기

---

`UCLASS`마다 여러 개의 `UPROPERTY`가 선언될 수 있다.