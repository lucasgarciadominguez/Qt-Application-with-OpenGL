/// @copyright ...
/// @licence ...
/// @author �ngel

#pragma once

#if defined DLL_PROJECT

    #define API __declspec(dllexport)

#else

    #define API __declspec(dllimport)

#endif
