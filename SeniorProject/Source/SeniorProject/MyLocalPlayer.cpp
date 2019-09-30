// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLocalPlayer.h"
#include "PerspectiveMatrix.h"
#include "SceneView.h"
#include "Camera/CameraTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "Math/Axis.h"

FSceneView * UMyLocalPlayer::CalcSceneView(FSceneViewFamily * ViewFamily, FVector & OutViewLocation, FRotator & OutViewRotation, FViewport * Viewport, FViewElementDrawer * ViewDrawer, EStereoscopicPass StereoPass)
{
	//Changes the way the screen is rendered using a modifed calc scene view
	FSceneView* View = ULocalPlayer::CalcSceneView(ViewFamily, OutViewLocation, OutViewRotation, Viewport, ViewDrawer, StereoPass);
	if (View)
	{
		FMatrix CurrentMatrix = View->ViewMatrices.GetProjectionMatrix();

		float FOV = FMath::DegreesToRadians(60.0f);
		FMatrix ProjectionMatrix = FReversedZPerspectiveMatrix(FOV, 16.0f, 9.0f, GNearClippingPlane);	
		ProjectionMatrix.ApplyScale(-1);
		ProjectionMatrix.Mirror(EAxis::X, EAxis::None); // MIRRORS THE AXIS ON A DECLEARED AXIS
		//ProjectionMatrix.GetColumn(3) * -1;
		View->UpdateProjectionMatrix(ProjectionMatrix);
		FMinimalViewInfo* viewInfo = new FMinimalViewInfo();
		APlayerCameraManager* camera = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
		camera->FillCameraCache(*viewInfo);
		//viewInfo->OffCenterProjectionOffset.Y = -1;
		camera->SetCameraCachePOV(*viewInfo);
		
	}

	return View;
}