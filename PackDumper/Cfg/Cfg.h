#pragma once

namespace cfg
{
	// EDUMPMETHOD::BY_PATH_LIST = 1 -> Works by calling Get() with a specific path as c_szFileName argument
	// EDUMPMETHOD::ON_LOAD      = 2 -> Works by Hook, but the Hook isn't attached automatically
	// EDUMPMETHOD::AUTO_HOOK    = 3 -> Works by Hook! Everytime the game loads a file by itself, you get this file too
	uint8_t DumpMethod = 0;

	// 1, 2, 3, 4 +
	uint8_t CEterPackManagerGet_CallType = 0;

	// 10ABCD || 0x10ABCD
	uintptr_t pCEterPackManager_RVA   = 0;

	// 10ABCD || 0x10ABCD
	uintptr_t CEterPackManagerGet_RVA = 0;

	// 10ABCD || 0x10ABCD
	uintptr_t MappedFileLoad_RVA      = 0;

	// 1 = Try Auto Discover MappedFile Size || 10ABCD || 0x10ABCD
	// Auto Discover is only allowed if DumpMethod == 1 (BY_PATH_LIST)
	uintptr_t CMappedFileSize_RVA     = 0;


	// Only for Debugging
	std::string Str_DumpMethod;
	std::string Str_CEterPackManagerGet_CallType;
	std::string Str_pCEterPackManager_RVA;
	std::string Str_CEterPackManagerGet_RVA;
	std::string Str_MappedFileLoad_RVA;
	std::string Str_CMappedFileSize_RVA;
}