// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineC/MyActor_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor_Test() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREALENGINEC_API UClass* Z_Construct_UClass_AMyActor_Test();
UNREALENGINEC_API UClass* Z_Construct_UClass_AMyActor_Test_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealEngineC();
// End Cross Module References

// Begin Class AMyActor_Test Function DemostrateFundamentals
struct Z_Construct_UFunction_AMyActor_Test_DemostrateFundamentals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyActor_Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de una funcion publica\n" },
#endif
		{ "ModuleRelativePath", "MyActor_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una funcion publica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_Test_DemostrateFundamentals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor_Test, nullptr, "DemostrateFundamentals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_Test_DemostrateFundamentals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_Test_DemostrateFundamentals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActor_Test_DemostrateFundamentals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_Test_DemostrateFundamentals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor_Test::execDemostrateFundamentals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DemostrateFundamentals();
	P_NATIVE_END;
}
// End Class AMyActor_Test Function DemostrateFundamentals

// Begin Class AMyActor_Test
void AMyActor_Test::StaticRegisterNativesAMyActor_Test()
{
	UClass* Class = AMyActor_Test::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DemostrateFundamentals", &AMyActor_Test::execDemostrateFundamentals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor_Test);
UClass* Z_Construct_UClass_AMyActor_Test_NoRegister()
{
	return AMyActor_Test::StaticClass();
}
struct Z_Construct_UClass_AMyActor_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor_Test.h" },
		{ "ModuleRelativePath", "MyActor_Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFloatVariable_MetaData[] = {
		{ "Category", "MyActor_Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de uan variable instancia publica\n" },
#endif
		{ "ModuleRelativePath", "MyActor_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de uan variable instancia publica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_edad_MetaData[] = {
		{ "Category", "MyActor_Test" },
		{ "ModuleRelativePath", "MyActor_Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_esInstructor_MetaData[] = {
		{ "Category", "MyActor_Test" },
		{ "ModuleRelativePath", "MyActor_Test.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nombre_MetaData[] = {
		{ "Category", "MyActor_Test" },
		{ "ModuleRelativePath", "MyActor_Test.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloatVariable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_edad;
	static void NewProp_esInstructor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_esInstructor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_nombre;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_Test_DemostrateFundamentals, "DemostrateFundamentals" }, // 563313141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Test_Statics::NewProp_MyFloatVariable = { "MyFloatVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor_Test, MyFloatVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFloatVariable_MetaData), NewProp_MyFloatVariable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Test_Statics::NewProp_edad = { "edad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor_Test, edad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_edad_MetaData), NewProp_edad_MetaData) };
void Z_Construct_UClass_AMyActor_Test_Statics::NewProp_esInstructor_SetBit(void* Obj)
{
	((AMyActor_Test*)Obj)->esInstructor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Test_Statics::NewProp_esInstructor = { "esInstructor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActor_Test), &Z_Construct_UClass_AMyActor_Test_Statics::NewProp_esInstructor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_esInstructor_MetaData), NewProp_esInstructor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyActor_Test_Statics::NewProp_nombre = { "nombre", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor_Test, nombre), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nombre_MetaData), NewProp_nombre_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Test_Statics::NewProp_MyFloatVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Test_Statics::NewProp_edad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Test_Statics::NewProp_esInstructor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Test_Statics::NewProp_nombre,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Test_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Test_Statics::ClassParams = {
	&AMyActor_Test::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor_Test_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Test_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor_Test()
{
	if (!Z_Registration_Info_UClass_AMyActor_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor_Test.OuterSingleton, Z_Construct_UClass_AMyActor_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor_Test.OuterSingleton;
}
template<> UNREALENGINEC_API UClass* StaticClass<AMyActor_Test>()
{
	return AMyActor_Test::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor_Test);
AMyActor_Test::~AMyActor_Test() {}
// End Class AMyActor_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_MyActor_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor_Test, AMyActor_Test::StaticClass, TEXT("AMyActor_Test"), &Z_Registration_Info_UClass_AMyActor_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor_Test), 2053027880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_MyActor_Test_h_3321821203(TEXT("/Script/UnrealEngineC"),
	Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_MyActor_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_MyActor_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
