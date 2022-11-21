// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GnomeAdventures/FlyingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingPlatform() {}
// Cross Module References
	GNOMEADVENTURES_API UClass* Z_Construct_UClass_AFlyingPlatform_NoRegister();
	GNOMEADVENTURES_API UClass* Z_Construct_UClass_AFlyingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GnomeAdventures();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFlyingPlatform::StaticRegisterNativesAFlyingPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlyingPlatform);
	UClass* Z_Construct_UClass_AFlyingPlatform_NoRegister()
	{
		return AFlyingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AFlyingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_XVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_YVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlyingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GnomeAdventures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlyingPlatform.h" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "FlyingPlatform" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPlatform, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_XVelocity_MetaData[] = {
		{ "Category", "FlyingPlatform" },
		{ "Comment", "//Velocity Variable\n" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
		{ "ToolTip", "Velocity Variable" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_XVelocity = { "XVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPlatform, XVelocity), METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_XVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_XVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_YVelocity_MetaData[] = {
		{ "Category", "FlyingPlatform" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_YVelocity = { "YVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPlatform, YVelocity), METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_YVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_YVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_ZVelocity_MetaData[] = {
		{ "Category", "FlyingPlatform" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_ZVelocity = { "ZVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPlatform, ZVelocity), METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_ZVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_ZVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_EndPosition_MetaData[] = {
		{ "Category", "FlyingPlatform" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPlatform, EndPosition), METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_EndPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_EndPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "FlyingPlatform" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPlatform, Speed), METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "FlyingPlatform" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPlatform, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PlatformVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PlatformVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PositionDistance_MetaData[] = {
		{ "Category", "FlyingPlatform" },
		{ "ModuleRelativePath", "FlyingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PositionDistance = { "PositionDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingPlatform, PositionDistance), METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PositionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PositionDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlyingPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_XVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_YVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_ZVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_EndPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PlatformVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPlatform_Statics::NewProp_PositionDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlyingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlyingPlatform_Statics::ClassParams = {
		&AFlyingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlyingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlyingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlyingPlatform()
	{
		if (!Z_Registration_Info_UClass_AFlyingPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlyingPlatform.OuterSingleton, Z_Construct_UClass_AFlyingPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlyingPlatform.OuterSingleton;
	}
	template<> GNOMEADVENTURES_API UClass* StaticClass<AFlyingPlatform>()
	{
		return AFlyingPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingPlatform);
	struct Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_FlyingPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_FlyingPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlyingPlatform, AFlyingPlatform::StaticClass, TEXT("AFlyingPlatform"), &Z_Registration_Info_UClass_AFlyingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlyingPlatform), 1886797721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_FlyingPlatform_h_2210306848(TEXT("/Script/GnomeAdventures"),
		Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_FlyingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GnomeAdventures_Source_GnomeAdventures_FlyingPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
