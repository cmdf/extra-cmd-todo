#ifndef _MAIN_H_
#define _MAIN_H_


// Version Defs
#include <sdkddkver.h>

// Reset Version
#ifdef WINVER
#undef WINVER
#endif
#ifdef _WIN32_WINNT
#undef _WIN32_WINNT
#endif

// Uses Version
#define WINVER	_WIN32_WINNT_WINXP 
#define _WIN32_WINNT	_WIN32_WINNT_WINXP

// Windows API
#include <Windows.h>


#endif
