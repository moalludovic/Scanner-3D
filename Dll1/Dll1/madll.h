#pragma once

#ifdef DLL1_EXPORTS
#define DLLFUNC __declspec(dllexport)
#else
#define DLLFUNC __declspec(dllimport)
#endif

#ifdef __cplusplus    // If used by C++ code, 
extern "C" {          // we need to export the C interface
#endif

	DLLFUNC int __cdecl maFonc(int toto);


#ifdef __cplusplus
}
#endif

