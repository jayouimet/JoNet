#pragma once

#if defined(_WIN32) || defined(_WIN64)   
    #include <Windows.h>
    #define JN_PLATFORM_WINDOWS
    #if JN_DYNAMIC_LINK
        #ifdef JN_BUILD_DLL
            #define JONET_API __declspec(dllexport)
        #else
            #define JONET_API __declspec(dllimport)
        #endif
    #else
        #define JONET_API
    #endif
#else
    #error JoNet only supports Windows!
#endif

#ifdef JN_ENABLE_ASSERTS
    #define JN_ASSERT(x, ...) { if(!(x)) { JN_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
    #define JN_CORE_ASSERT(x, ...) { if(!(x)) { JN_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
    #define JN_ASSERT(x, ...)
    #define JN_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)