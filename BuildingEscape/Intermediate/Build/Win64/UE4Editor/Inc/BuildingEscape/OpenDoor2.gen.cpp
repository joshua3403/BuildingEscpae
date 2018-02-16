// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OpenDoor2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor2() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UOpenDoor2_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UOpenDoor2();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpenDoor2.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, "DoorEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UOpenDoor2::StaticRegisterNativesUOpenDoor2()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor2_NoRegister()
	{
		return UOpenDoor2::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "OpenDoor2.h" },
				{ "ModuleRelativePath", "OpenDoor2.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClose_MetaData[] = {
				{ "ModuleRelativePath", "OpenDoor2.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClose = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnClose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UOpenDoor2, OnClose), Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnClose_MetaData, ARRAY_COUNT(NewProp_OnClose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOpen_MetaData[] = {
				{ "ModuleRelativePath", "OpenDoor2.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpen = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UOpenDoor2, OnOpen), Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnOpen_MetaData, ARRAY_COUNT(NewProp_OnOpen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[] = {
				{ "Category", "OpenDoor2" },
				{ "ModuleRelativePath", "OpenDoor2.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate = { UE4CodeGen_Private::EPropertyClass::Object, "PressurePlate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor2, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(NewProp_PressurePlate_MetaData, ARRAY_COUNT(NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
				{ "Category", "OpenDoor2" },
				{ "ModuleRelativePath", "OpenDoor2.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenAngle = { UE4CodeGen_Private::EPropertyClass::Float, "OpenAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UOpenDoor2, OpenAngle), METADATA_PARAMS(NewProp_OpenAngle_MetaData, ARRAY_COUNT(NewProp_OpenAngle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnClose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnOpen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressurePlate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenAngle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOpenDoor2>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOpenDoor2::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor2, 3130130651);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor2(Z_Construct_UClass_UOpenDoor2, &UOpenDoor2::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UOpenDoor2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
