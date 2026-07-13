#include <stdio.h>
#include "c_types.h"
#include "windows_t.h"
#include "hash_api.h"

int __cdecl main()
{
#ifdef _WIN64
    uint mHash = 0x2A5175AD1A0CECBC;
    uint hKey  = 0x7A61A1C72F518C54;
#elif _WIN32
    uint mHash = 0x42509A1C;
    uint hKey  = 0xCADE960B;
#endif
    HMODULE hKernel32 = FindMod_MH(mHash, hKey);
    if (hKernel32 == NULL)
    {
        return 1;
    }
    printf_s("kernel32.dll: 0x%zX\n", (uint)hKernel32);
    return 0;
}
