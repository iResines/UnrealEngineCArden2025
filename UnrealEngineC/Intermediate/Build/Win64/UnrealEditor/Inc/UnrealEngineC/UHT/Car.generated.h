// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Car.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINEC_Car_generated_h
#error "Car.generated.h already included, missing '#pragma once' in Car.h"
#endif
#define UNREALENGINEC_Car_generated_h

#define FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Car_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACar(); \
	friend struct Z_Construct_UClass_ACar_Statics; \
public: \
	DECLARE_CLASS(ACar, AVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEngineC"), NO_API) \
	DECLARE_SERIALIZER(ACar)


#define FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Car_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACar(ACar&&); \
	ACar(const ACar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACar) \
	NO_API virtual ~ACar();


#define FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Car_h_27_PROLOG
#define FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Car_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Car_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Car_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEC_API UClass* StaticClass<class ACar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Car_h


#define FOREACH_ENUM_ECARBRAND(op) \
	op(ECarBrand::Toyota) \
	op(ECarBrand::Ford) \
	op(ECarBrand::Honda) \
	op(ECarBrand::BMW) \
	op(ECarBrand::Audi) \
	op(ECarBrand::Mercedes) \
	op(ECarBrand::Volkswagen) \
	op(ECarBrand::Tesla) \
	op(ECarBrand::Hyundai) \
	op(ECarBrand::Nissan) 

enum class ECarBrand;
template<> struct TIsUEnumClass<ECarBrand> { enum { Value = true }; };
template<> UNREALENGINEC_API UEnum* StaticEnum<ECarBrand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
