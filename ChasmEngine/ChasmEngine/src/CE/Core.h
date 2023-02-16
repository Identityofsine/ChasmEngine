#pragma once


#ifdef CE_PLATFORM_WINDOWS 
	#ifdef CE_BUILD_DLL
		#define CHASM_API _declspec(dllexport)
	#else
		#define CHASM_API _declspec(dllexport)
	#endif
	
#else
	#error CHASM ENGINE ONLY SUPPORTS WINDOWS!

#endif
