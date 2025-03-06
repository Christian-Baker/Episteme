#pragma once

#ifdef EP_PLATFORM_WINDOWS
	#ifdef EP_BUILD_DLL
		#define EPISTEME_API __declspec(dllexport)
	#else
		#define EPSITEME_API __declspec(dllimport)
	#endif // EP_BUILD_DLL
#else
	#error Episteme only supports Windows!
#endif // GE_PLATFORM_WINDOWS
