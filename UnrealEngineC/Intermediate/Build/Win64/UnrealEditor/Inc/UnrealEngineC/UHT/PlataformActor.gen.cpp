// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineC/PlataformActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataformActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UNREALENGINEC_API UClass* Z_Construct_UClass_APlataformActor();
UNREALENGINEC_API UClass* Z_Construct_UClass_APlataformActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealEngineC();
// End Cross Module References

// Begin Class APlataformActor Function ChangeMaterial
struct Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics
{
	struct PlataformActor_eventChangeMaterial_Parms
	{
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Platform Functions" },
		{ "ModuleRelativePath", "PlataformActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlataformActor_eventChangeMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlataformActor, nullptr, "ChangeMaterial", nullptr, nullptr, Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::PlataformActor_eventChangeMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::PlataformActor_eventChangeMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlataformActor_ChangeMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlataformActor_ChangeMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlataformActor::execChangeMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMaterial(Z_Param_NewMaterial);
	P_NATIVE_END;
}
// End Class APlataformActor Function ChangeMaterial

// Begin Class APlataformActor Function OnOverlapBegin
struct Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics
{
	struct PlataformActor_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverLappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlataformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverLappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverLappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_OverLappedComp = { "OverLappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlataformActor_eventOnOverlapBegin_Parms, OverLappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverLappedComp_MetaData), NewProp_OverLappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlataformActor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlataformActor_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlataformActor_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PlataformActor_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlataformActor_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlataformActor_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_OverLappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlataformActor, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::PlataformActor_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::PlataformActor_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlataformActor_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlataformActor_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlataformActor::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverLappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverLappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APlataformActor Function OnOverlapBegin

// Begin Class APlataformActor
void APlataformActor::StaticRegisterNativesAPlataformActor()
{
	UClass* Class = APlataformActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeMaterial", &APlataformActor::execChangeMaterial },
		{ "OnOverlapBegin", &APlataformActor::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlataformActor);
UClass* Z_Construct_UClass_APlataformActor_NoRegister()
{
	return APlataformActor::StaticClass();
}
struct Z_Construct_UClass_APlataformActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlataformActor.h" },
		{ "ModuleRelativePath", "PlataformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "PlataformActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlataformActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlataformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMaterial_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables\n" },
#endif
		{ "ModuleRelativePath", "PlataformActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "PlataformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAmplitud_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "PlataformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "PlataformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovingRight_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "PlataformActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementAmplitud;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
	static void NewProp_bMovingRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovingRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlataformActor_ChangeMaterial, "ChangeMaterial" }, // 3005265213
		{ &Z_Construct_UFunction_APlataformActor_OnOverlapBegin, "OnOverlapBegin" }, // 1404263905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataformActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlataformActor_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlataformActor, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlataformActor_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlataformActor, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlataformActor_Statics::NewProp_PlatformMaterial = { "PlatformMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlataformActor, PlatformMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMaterial_MetaData), NewProp_PlatformMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataformActor_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlataformActor, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataformActor_Statics::NewProp_MovementAmplitud = { "MovementAmplitud", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlataformActor, MovementAmplitud), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAmplitud_MetaData), NewProp_MovementAmplitud_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlataformActor_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlataformActor, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLocation_MetaData), NewProp_InitialLocation_MetaData) };
void Z_Construct_UClass_APlataformActor_Statics::NewProp_bMovingRight_SetBit(void* Obj)
{
	((APlataformActor*)Obj)->bMovingRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlataformActor_Statics::NewProp_bMovingRight = { "bMovingRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlataformActor), &Z_Construct_UClass_APlataformActor_Statics::NewProp_bMovingRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovingRight_MetaData), NewProp_bMovingRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlataformActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformActor_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformActor_Statics::NewProp_PlatformMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformActor_Statics::NewProp_PlatformMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformActor_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformActor_Statics::NewProp_MovementAmplitud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformActor_Statics::NewProp_InitialLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformActor_Statics::NewProp_bMovingRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlataformActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlataformActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlataformActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlataformActor_Statics::ClassParams = {
	&APlataformActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlataformActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlataformActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlataformActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlataformActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlataformActor()
{
	if (!Z_Registration_Info_UClass_APlataformActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlataformActor.OuterSingleton, Z_Construct_UClass_APlataformActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlataformActor.OuterSingleton;
}
template<> UNREALENGINEC_API UClass* StaticClass<APlataformActor>()
{
	return APlataformActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlataformActor);
APlataformActor::~APlataformActor() {}
// End Class APlataformActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_PlataformActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlataformActor, APlataformActor::StaticClass, TEXT("APlataformActor"), &Z_Registration_Info_UClass_APlataformActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlataformActor), 285849069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_PlataformActor_h_471913990(TEXT("/Script/UnrealEngineC"),
	Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_PlataformActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_PlataformActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
