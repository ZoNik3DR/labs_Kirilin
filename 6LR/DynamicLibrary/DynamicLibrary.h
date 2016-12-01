#pragma once

#ifdef DYNAMICLIBRARY_EXPORTS
#define DYNAMICLIBRARY_API __declspec(dllexport)
#else
#define DYNAMICLIBRARY_API __declspec(dllimport)
#endif


DYNAMICLIBRARY_API double integral_1(int n);
DYNAMICLIBRARY_API double integral_2(int n);
DYNAMICLIBRARY_API double integral_3(int n);
DYNAMICLIBRARY_API double integral_4(int n);