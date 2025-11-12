// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineC/Temperature.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemperature() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREALENGINEC_API UClass* Z_Construct_UClass_ATemperature();
UNREALENGINEC_API UClass* Z_Construct_UClass_ATemperature_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealEngineC();
// End Cross Module References

// Begin Class ATemperature Function CalculateAverageTemperature
struct Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics
{
	struct Temperature_eventCalculateAverageTemperature_Parms
	{
		float Temp1;
		float Temp2;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateAverageTemperature_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateAverageTemperature_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateAverageTemperature_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::NewProp_Temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::NewProp_Temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperature, nullptr, "CalculateAverageTemperature", nullptr, nullptr, Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::Temperature_eventCalculateAverageTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::Temperature_eventCalculateAverageTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperature_CalculateAverageTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperature_CalculateAverageTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperature::execCalculateAverageTemperature)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperature::CalculateAverageTemperature(Z_Param_Temp1,Z_Param_Temp2);
	P_NATIVE_END;
}
// End Class ATemperature Function CalculateAverageTemperature

// Begin Class ATemperature Function CalculateStaticTemperatureDifference
struct Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics
{
	struct Temperature_eventCalculateStaticTemperatureDifference_Parms
	{
		float Temp1;
		float Temp2;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateStaticTemperatureDifference_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateStaticTemperatureDifference_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateStaticTemperatureDifference_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::NewProp_Temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::NewProp_Temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperature, nullptr, "CalculateStaticTemperatureDifference", nullptr, nullptr, Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::Temperature_eventCalculateStaticTemperatureDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::Temperature_eventCalculateStaticTemperatureDifference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperature::execCalculateStaticTemperatureDifference)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperature::CalculateStaticTemperatureDifference(Z_Param_Temp1,Z_Param_Temp2);
	P_NATIVE_END;
}
// End Class ATemperature Function CalculateStaticTemperatureDifference

// Begin Class ATemperature Function CalculateTemperatureDifference
struct Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics
{
	struct Temperature_eventCalculateTemperatureDifference_Parms
	{
		float Temp1;
		float Temp2;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateTemperatureDifference_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateTemperatureDifference_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventCalculateTemperatureDifference_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::NewProp_Temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::NewProp_Temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperature, nullptr, "CalculateTemperatureDifference", nullptr, nullptr, Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::Temperature_eventCalculateTemperatureDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::Temperature_eventCalculateTemperatureDifference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperature::execCalculateTemperatureDifference)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperature::CalculateTemperatureDifference(Z_Param_Temp1,Z_Param_Temp2);
	P_NATIVE_END;
}
// End Class ATemperature Function CalculateTemperatureDifference

// Begin Class ATemperature Function ConvertKelvinToCelcius
struct Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics
{
	struct Temperature_eventConvertKelvinToCelcius_Parms
	{
		float Kelvin;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Temperature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Kelvin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::NewProp_Kelvin = { "Kelvin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventConvertKelvinToCelcius_Parms, Kelvin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventConvertKelvinToCelcius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::NewProp_Kelvin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperature, nullptr, "ConvertKelvinToCelcius", nullptr, nullptr, Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::Temperature_eventConvertKelvinToCelcius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::Temperature_eventConvertKelvinToCelcius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperature::execConvertKelvinToCelcius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Kelvin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperature::ConvertKelvinToCelcius(Z_Param_Kelvin);
	P_NATIVE_END;
}
// End Class ATemperature Function ConvertKelvinToCelcius

// Begin Class ATemperature Function GetTemperatureFahrenheit
struct Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics
{
	struct Temperature_eventGetTemperatureFahrenheit_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para obtener la temperatura en Fahrenheit\n" },
#endif
		{ "ModuleRelativePath", "Temperature.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para obtener la temperatura en Fahrenheit" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventGetTemperatureFahrenheit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperature, nullptr, "GetTemperatureFahrenheit", nullptr, nullptr, Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::Temperature_eventGetTemperatureFahrenheit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::Temperature_eventGetTemperatureFahrenheit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperature::execGetTemperatureFahrenheit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTemperatureFahrenheit();
	P_NATIVE_END;
}
// End Class ATemperature Function GetTemperatureFahrenheit

// Begin Class ATemperature Function OnTemperatureCheck
struct Temperature_eventOnTemperatureCheck_Parms
{
	float CurrentTemperature;
};
static const FName NAME_ATemperature_OnTemperatureCheck = FName(TEXT("OnTemperatureCheck"));
void ATemperature::OnTemperatureCheck(float CurrentTemperature)
{
	Temperature_eventOnTemperatureCheck_Parms Parms;
	Parms.CurrentTemperature=CurrentTemperature;
	UFunction* Func = FindFunctionChecked(NAME_ATemperature_OnTemperatureCheck);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Evento para checar temperatura\n" },
#endif
		{ "ModuleRelativePath", "Temperature.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evento para checar temperatura" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTemperature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::NewProp_CurrentTemperature = { "CurrentTemperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperature_eventOnTemperatureCheck_Parms, CurrentTemperature), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::NewProp_CurrentTemperature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperature, nullptr, "OnTemperatureCheck", nullptr, nullptr, Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::PropPointers), sizeof(Temperature_eventOnTemperatureCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Temperature_eventOnTemperatureCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperature_OnTemperatureCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperature_OnTemperatureCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATemperature Function OnTemperatureCheck

// Begin Class ATemperature
void ATemperature::StaticRegisterNativesATemperature()
{
	UClass* Class = ATemperature::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateAverageTemperature", &ATemperature::execCalculateAverageTemperature },
		{ "CalculateStaticTemperatureDifference", &ATemperature::execCalculateStaticTemperatureDifference },
		{ "CalculateTemperatureDifference", &ATemperature::execCalculateTemperatureDifference },
		{ "ConvertKelvinToCelcius", &ATemperature::execConvertKelvinToCelcius },
		{ "GetTemperatureFahrenheit", &ATemperature::execGetTemperatureFahrenheit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemperature);
UClass* Z_Construct_UClass_ATemperature_NoRegister()
{
	return ATemperature::StaticClass();
}
struct Z_Construct_UClass_ATemperature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Temperature.h" },
		{ "ModuleRelativePath", "Temperature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureCelcius_MetaData[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xef\xbf\xbdn para obtener la temperatura actual en celcius\n" },
#endif
		{ "ModuleRelativePath", "Temperature.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn para obtener la temperatura actual en celcius" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureCelcius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATemperature_CalculateAverageTemperature, "CalculateAverageTemperature" }, // 1695093687
		{ &Z_Construct_UFunction_ATemperature_CalculateStaticTemperatureDifference, "CalculateStaticTemperatureDifference" }, // 3273857952
		{ &Z_Construct_UFunction_ATemperature_CalculateTemperatureDifference, "CalculateTemperatureDifference" }, // 3537596713
		{ &Z_Construct_UFunction_ATemperature_ConvertKelvinToCelcius, "ConvertKelvinToCelcius" }, // 1252287686
		{ &Z_Construct_UFunction_ATemperature_GetTemperatureFahrenheit, "GetTemperatureFahrenheit" }, // 2481156922
		{ &Z_Construct_UFunction_ATemperature_OnTemperatureCheck, "OnTemperatureCheck" }, // 2054289251
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemperature>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemperature_Statics::NewProp_TemperatureCelcius = { "TemperatureCelcius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemperature, TemperatureCelcius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureCelcius_MetaData), NewProp_TemperatureCelcius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemperature_Statics::NewProp_TemperatureCelcius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperature_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATemperature_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperature_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemperature_Statics::ClassParams = {
	&ATemperature::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATemperature_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATemperature_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperature_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemperature_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATemperature()
{
	if (!Z_Registration_Info_UClass_ATemperature.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemperature.OuterSingleton, Z_Construct_UClass_ATemperature_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATemperature.OuterSingleton;
}
template<> UNREALENGINEC_API UClass* StaticClass<ATemperature>()
{
	return ATemperature::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATemperature);
ATemperature::~ATemperature() {}
// End Class ATemperature

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Temperature_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATemperature, ATemperature::StaticClass, TEXT("ATemperature"), &Z_Registration_Info_UClass_ATemperature, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemperature), 4253333037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Temperature_h_1481399407(TEXT("/Script/UnrealEngineC"),
	Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Temperature_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_isabe_OneDrive_Computadora_Documentos_UNREAL_UnrealEngineCArden2025_UnrealEngineC_Source_UnrealEngineC_Temperature_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
