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

// Begin Class AMyActor_Test
void AMyActor_Test::StaticRegisterNativesAMyActor_Test()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AMyActor_Test, AMyActor_Test::StaticClass, TEXT("AMyActor_Test"), &Z_Registration_Info_UClass_AMyActor_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor_Test), 402885145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_MyActor_Test_h_2089166961(TEXT("/Script/UnrealEngineC"),
	Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_MyActor_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_MyActor_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
