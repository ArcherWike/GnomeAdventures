// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GnomeAdventures/MovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}
// Cross Module References
	GNOMEADVENTURES_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	GNOMEADVENTURES_API UClass* Z_Construct_UClass_AMovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GnomeAdventures();
// End Cross Module References
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform);
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Moving_MetaData[];
#endif
		static void NewProp_Moving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Moving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GnomeAdventures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "Comment", "//CurentLocation += PlatformVelocity * DeltaTime;\n" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
		{ "ToolTip", "CurentLocation += PlatformVelocity * DeltaTime;" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, Direction), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Moving_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	void Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Moving_SetBit(void* Obj)
	{
		((AMovingPlatform*)Obj)->Moving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Moving = { "Moving", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingPlatform), &Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Moving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Moving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Moving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, Speed), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Moving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
		&AMovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
	}
	template<> GNOMEADVENTURES_API UClass* StaticClass<AMovingPlatform>()
	{
		return AMovingPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
	struct Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_MovingPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_MovingPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 3884517690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_MovingPlatform_h_885669430(TEXT("/Script/GnomeAdventures"),
		Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_MovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_MovingPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
