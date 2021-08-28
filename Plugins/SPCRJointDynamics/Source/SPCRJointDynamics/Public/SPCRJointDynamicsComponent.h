//======================================================================================
//  Copyright (c) 2019 SPARK CREATIVE Inc.
//  All rights reserved.
//======================================================================================
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SPCRJointDynamicsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPCRJOINTDYNAMICS_API USPCRJointDynamicsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USPCRJointDynamicsComponent();

	//儕僙僢僩傪峴偆僼儔僌傪僆儞偵偡傞
	//UFUNCTION(BlueprintCallable)
	void OnStartReset();

	//AnimBP偺JointDynamics僲乕僪偱儕僙僢僩傪峴偭偨偲偒偵屇偽傟傞
	void OnFinishReset();

	//儕僙僢僩僼儔僌
	UPROPERTY(BlueprintReadOnly, Category = "Physics")
	bool isReset;

protected:
	//儕僙僢僩張棟廔椆妋擣偺僼儔僌
	bool isFinishReset;

	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void OnInit();
	void OnUpdateReset();

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
