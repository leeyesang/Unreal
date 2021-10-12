// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_PROJECT_My_projectCharacter_generated_h
#error "My_projectCharacter.generated.h already included, missing '#pragma once' in My_projectCharacter.h"
#endif
#define MY_PROJECT_My_projectCharacter_generated_h

#define My_project_Source_My_project_My_projectCharacter_h_12_SPARSE_DATA
#define My_project_Source_My_project_My_projectCharacter_h_12_RPC_WRAPPERS
#define My_project_Source_My_project_My_projectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define My_project_Source_My_project_My_projectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMy_projectCharacter(); \
	friend struct Z_Construct_UClass_AMy_projectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMy_projectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_project"), NO_API) \
	DECLARE_SERIALIZER(AMy_projectCharacter)


#define My_project_Source_My_project_My_projectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMy_projectCharacter(); \
	friend struct Z_Construct_UClass_AMy_projectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMy_projectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_project"), NO_API) \
	DECLARE_SERIALIZER(AMy_projectCharacter)


#define My_project_Source_My_project_My_projectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMy_projectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMy_projectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy_projectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy_projectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy_projectCharacter(AMy_projectCharacter&&); \
	NO_API AMy_projectCharacter(const AMy_projectCharacter&); \
public:


#define My_project_Source_My_project_My_projectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy_projectCharacter(AMy_projectCharacter&&); \
	NO_API AMy_projectCharacter(const AMy_projectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy_projectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy_projectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMy_projectCharacter)


#define My_project_Source_My_project_My_projectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMy_projectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMy_projectCharacter, FollowCamera); }


#define My_project_Source_My_project_My_projectCharacter_h_9_PROLOG
#define My_project_Source_My_project_My_projectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	My_project_Source_My_project_My_projectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	My_project_Source_My_project_My_projectCharacter_h_12_SPARSE_DATA \
	My_project_Source_My_project_My_projectCharacter_h_12_RPC_WRAPPERS \
	My_project_Source_My_project_My_projectCharacter_h_12_INCLASS \
	My_project_Source_My_project_My_projectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define My_project_Source_My_project_My_projectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	My_project_Source_My_project_My_projectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	My_project_Source_My_project_My_projectCharacter_h_12_SPARSE_DATA \
	My_project_Source_My_project_My_projectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	My_project_Source_My_project_My_projectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	My_project_Source_My_project_My_projectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_PROJECT_API UClass* StaticClass<class AMy_projectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID My_project_Source_My_project_My_projectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
