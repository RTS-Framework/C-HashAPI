#ifndef WINDOWS_T_H
#define WINDOWS_T_H

#include "c_types.h"
#include "win_types.h"

typedef void* HMODULE;

typedef UINT (*WinExec_t)
(
    LPCSTR lpCmdLine, UINT uCmdShow
);

#endif // WINDOWS_T_H
