// Copyright (c) 2025 Egor Ermakov.


#include "Miscellaneous/FlexiCameraModeTrigger.h"

#include "Components/BoxComponent.h"
#include "FlexiCameraModeManagerComponent.h"
#include "FlexiCamInterface.h"
#include "Components/BillboardComponent.h"

// Sets default values
AFlexiCameraModeTrigger::AFlexiCameraModeTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
	check(TriggerVolume);
	RootComponent = TriggerVolume;
	TriggerVolume->SetGenerateOverlapEvents(true);
	TriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &AFlexiCameraModeTrigger::OnTriggerBeginOverlap);
	TriggerVolume->OnComponentEndOverlap.AddDynamic(this, &AFlexiCameraModeTrigger::OnTriggerEndOverlap);

#if WITH_EDITORONLY_DATA
	EditorIcon = CreateDefaultSubobject<UBillboardComponent>(TEXT("EditorIcon"));
	EditorIcon->SetupAttachment(RootComponent);
	EditorIcon->SetIsVisualizationComponent(true);
	EditorIcon->bIsScreenSizeScaled = true;
	EditorIcon->SetHiddenInGame(true);

	static ConstructorHelpers::FObjectFinder<UTexture2D> CameraIconTexture(
		TEXT("/Engine/EditorResources/S_TriggerBox")
	);
	if (CameraIconTexture.Succeeded())
	{
		EditorIcon->SetSprite(CameraIconTexture.Object);
	}
#endif
}

void AFlexiCameraModeTrigger::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (UFlexiCameraModeManagerComponent* CameraModeManagerComponent = GetCameraModeManagerComponent(OtherActor))
	{
		CameraModeManagerComponent->SetCameraMode(CameraModeClass);
	}
}

void AFlexiCameraModeTrigger::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (UFlexiCameraModeManagerComponent* CameraModeManagerComponent = GetCameraModeManagerComponent(OtherActor))
	{
		CameraModeManagerComponent->ResetToDefaultCameraMode();
	}
}

UFlexiCameraModeManagerComponent* AFlexiCameraModeTrigger::GetCameraModeManagerComponent(AActor* Actor) const
{
	if (Actor && Actor->GetClass()->ImplementsInterface(UFlexiCamInterface::StaticClass()))
	{
		return IFlexiCamInterface::Execute_GetFlexiCameraModeManagerComponent(Actor);
	}
	return nullptr;
}
