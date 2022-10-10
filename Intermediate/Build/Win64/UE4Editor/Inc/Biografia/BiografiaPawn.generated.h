// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIOGRAFIA_BiografiaPawn_generated_h
#error "BiografiaPawn.generated.h already included, missing '#pragma once' in BiografiaPawn.h"
#endif
#define BIOGRAFIA_BiografiaPawn_generated_h

#define Biografia_Source_Biografia_BiografiaPawn_h_11_SPARSE_DATA
#define Biografia_Source_Biografia_BiografiaPawn_h_11_RPC_WRAPPERS
#define Biografia_Source_Biografia_BiografiaPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Biografia_Source_Biografia_BiografiaPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABiografiaPawn(); \
	friend struct Z_Construct_UClass_ABiografiaPawn_Statics; \
public: \
	DECLARE_CLASS(ABiografiaPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Biografia"), NO_API) \
	DECLARE_SERIALIZER(ABiografiaPawn)


#define Biografia_Source_Biografia_BiografiaPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABiografiaPawn(); \
	friend struct Z_Construct_UClass_ABiografiaPawn_Statics; \
public: \
	DECLARE_CLASS(ABiografiaPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Biografia"), NO_API) \
	DECLARE_SERIALIZER(ABiografiaPawn)


#define Biografia_Source_Biografia_BiografiaPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABiografiaPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABiografiaPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABiografiaPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABiografiaPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABiografiaPawn(ABiografiaPawn&&); \
	NO_API ABiografiaPawn(const ABiografiaPawn&); \
public:


#define Biografia_Source_Biografia_BiografiaPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABiografiaPawn(ABiografiaPawn&&); \
	NO_API ABiografiaPawn(const ABiografiaPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABiografiaPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABiografiaPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABiografiaPawn)


#define Biografia_Source_Biografia_BiografiaPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(ABiografiaPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABiografiaPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABiografiaPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(ABiografiaPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(ABiografiaPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(ABiografiaPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(ABiografiaPawn, MinSpeed); }


#define Biografia_Source_Biografia_BiografiaPawn_h_8_PROLOG
#define Biografia_Source_Biografia_BiografiaPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Biografia_Source_Biografia_BiografiaPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	Biografia_Source_Biografia_BiografiaPawn_h_11_SPARSE_DATA \
	Biografia_Source_Biografia_BiografiaPawn_h_11_RPC_WRAPPERS \
	Biografia_Source_Biografia_BiografiaPawn_h_11_INCLASS \
	Biografia_Source_Biografia_BiografiaPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Biografia_Source_Biografia_BiografiaPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Biografia_Source_Biografia_BiografiaPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	Biografia_Source_Biografia_BiografiaPawn_h_11_SPARSE_DATA \
	Biografia_Source_Biografia_BiografiaPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Biografia_Source_Biografia_BiografiaPawn_h_11_INCLASS_NO_PURE_DECLS \
	Biografia_Source_Biografia_BiografiaPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIOGRAFIA_API UClass* StaticClass<class ABiografiaPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Biografia_Source_Biografia_BiografiaPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
