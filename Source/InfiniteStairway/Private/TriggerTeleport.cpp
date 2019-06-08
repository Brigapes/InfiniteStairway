// Fill out your copyright notice in the Description page of Project Settings.

//#include <Core.h>
#include "..\Public\TriggerTeleport.h"
#include <UnrealEngine.h>
#include "Engine/World.h"
//#include "Engine/cha"
//#include "GameplayStatics.generated.h"
//#include "Engine/GameInstance.h"
//#include "Engine/ActorChannel.h"
//#include "Pawn.generated.h"


// Sets default values for this component's properties
UTriggerTeleport::UTriggerTeleport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTriggerTeleport::BeginPlay()
{
	Super::BeginPlay();

	if (!parent) {
		UE_LOG(LogTemp, Warning, TEXT("NO PARENT"));
	}
	if (!CharacterToTransform) {
		UE_LOG(LogTemp, Warning, TEXT("NO char to trans"));
	}

	// ...
	//parent = Super::GetOwner();
	//parent = GetOwner()->GetRootComponent()->AttachParent->GetOwner();

	


	if (!parent) {

		UE_LOG(LogTemp, Error, TEXT("DID NOT GET PARENT"));
	}
	else {
		//FString* name = new FString( "GOT PARENT NAMED: "	+ );
		UE_LOG(LogTemp, Warning, TEXT(" SUCESSFULLY GOT PARENT"));


		//parent->SetActorLocation()


	}
}


// Called every frame
void UTriggerTeleport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	















	
	///if (/*parent != nullptr &&*/ hasTeleported == false) {

	/*	if (!parent) {
			UE_LOG(LogTemp, Warning, TEXT(" NO PARENT"));
		}
		if (!CharacterToTransform) {
			UE_LOG(LogTemp, Warning, TEXT(" NO char to trans"));
		}

		if (parent) {
			auto crrLoc = parent->GetActorLocation();
			crrLoc = parent->GetTransform().GetLocation();

			//auto altLoc = CharacterToTransform->GetTransform().GetLocation();
			
			//UE_LOG(LogTemp, Warning, TEXT("parent %s "), crrLoc.ToString());

			const FVector newloc = FVector(
			(crrLoc.X+ LocationToTeleportCurrentOffset.X),
			(crrLoc.Y + LocationToTeleportCurrentOffset.Y),
			(crrLoc.Z + LocationToTeleportCurrentOffset.Z));

		parent->SetActorLocation(newloc);
		}
		
		if (CharacterToTransform) {

			auto trs = CharacterToTransform->GetTransform();
			auto crrLoc = CharacterToTransform->GetTransform().GetLocation();

			UE_LOG(LogTemp, Warning, TEXT("Result is %s"), *crrLoc.ToString());
			//UE_LOG(LogTemp, Warning, TEXT("char to trans %f "), altLoc);

			const FVector newloc = FVector(
				(crrLoc.X + LocationToTeleportCurrentOffset.X),
				(crrLoc.Y + LocationToTeleportCurrentOffset.Y),
				(crrLoc.Z + LocationToTeleportCurrentOffset.Y));


			trs.SetLocation(newloc);
			//CharacterToTransform->SetActorTransform(trs);
			CharacterToTransform->SetActorLocation(newloc, false, nullptr, ETeleportType::TeleportPhysics);

		}



		hasTeleported = false;

	}

	
	//ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	//if (myCharacter) {
	//	FVector loc = myCharacter->GetActorLocation();
	//}
	*/

}

