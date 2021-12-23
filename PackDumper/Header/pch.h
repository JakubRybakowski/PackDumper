#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <Psapi.h>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <random>
#include <sstream>
#include <string>
#include <vector>

#include "../_Extern/xorstr.hpp"
#include "../_Extern/detours.h"
#include "../_Extern/UtilityFunc.h"

#include "../Cfg/Cfg.h"
#include "../Core/Global.h"

#include "../Core/Dumper.h"