#ifndef _GETBASEADDRESS_H_
#define _GETBASEADDRESS_H_

#define _WIN32_WINNT 0x0501
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#include <windows.h>

PVOID GetBaseAddress(HANDLE proc);

#endif
