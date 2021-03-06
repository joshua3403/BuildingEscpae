// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_OpenDoor2_generated_h
#error "OpenDoor2.generated.h already included, missing '#pragma once' in OpenDoor2.h"
#endif
#define BUILDINGESCAPE_OpenDoor2_generated_h

#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_10_DELEGATE \
static inline void FDoorEvent_DelegateWrapper(const FMulticastScriptDelegate& DoorEvent) \
{ \
	DoorEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor2(); \
	friend BUILDINGESCAPE_API class UClass* Z_Construct_UClass_UOpenDoor2(); \
public: \
	DECLARE_CLASS(UOpenDoor2, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor2) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor2(); \
	friend BUILDINGESCAPE_API class UClass* Z_Construct_UClass_UOpenDoor2(); \
public: \
	DECLARE_CLASS(UOpenDoor2, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor2) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor2(UOpenDoor2&&); \
	NO_API UOpenDoor2(const UOpenDoor2&); \
public:


#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor2(UOpenDoor2&&); \
	NO_API UOpenDoor2(const UOpenDoor2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor2)


#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_12_PROLOG
#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_INCLASS \
	BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_OpenDoor2_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_OpenDoor2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
