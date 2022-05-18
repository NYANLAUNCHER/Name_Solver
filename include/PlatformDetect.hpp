#pragma once

// Check Compiler
#if defined(__clang__)
    #define COMPILER_CLANG
#elif defined(__GNUC__) || defined(__GNUG__)
    #define COMPILER_GCC
#else
    #define COMPILER_UNKNOWN
#endif

// Check OS
#if defined(_WIN32) && !defined(_WIN64)
    #define OS_WIN32

#elif defined(_WIN64)
    #define OS_WIN64

#elif defined(__linux__) && !defined(__ANDROID__)
    #define OS_LINUX

#elif defined(__ANDROID__)
    #define OS_ANDROID

#elif defined(__APPLE__) || defined(__MACH__)
	#include <TargetConditionals.h>
	#elif TARGET_IPHONE_SIMULATOR == 1
        #define OS_IOS_SIMULATOR

	#elif TARGET_OS_IPHONE == 1
        #define OS_IOS

	#elif TARGET_OS_MAC == 1
        #define OS_MAC
#else
    #define OS_UNKNOWN
#endif
