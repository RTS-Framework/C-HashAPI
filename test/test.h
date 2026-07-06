#ifndef TEST_H
#define TEST_H

#include "c_types.h"

// define unit tests
#pragma warning(push)
#pragma warning(disable: 4276)
bool TestLibMemory();
bool TestLibString();

bool TestFindMod_MH();
bool TestFindAPI_MA();
bool TestFindAPI_MH();
bool TestFindMod_MHL();
bool TestFindAPI_MAL();
bool TestFindAPI_MHL();
bool TestFindMod_A();
bool TestFindMod_W();
bool TestFindMod_AL();
bool TestFindMod_WL();
bool TestFindAPI_A();
bool TestFindAPI_W();
bool TestForwarded();
bool TestNotFound();
bool TestNULLArgument();
bool TestCalcModHash32();
bool TestCalcModHash64();
bool TestCalcProcHash32();
bool TestCalcProcHash64();
#pragma warning(pop)

typedef bool (*test_t)();
typedef struct { byte* Name; test_t Test; } unit;

static unit tests[] = {
    { "Lib_Memory", TestLibMemory },
    { "Lib_String", TestLibString },

    { "FindMod_MH",     TestFindMod_MH     },
    { "FindAPI_MA",     TestFindAPI_MA     },
    { "FindAPI_MH",     TestFindAPI_MH     },
    { "FindMod_MHL",    TestFindMod_MHL    },
    { "FindAPI_MAL",    TestFindAPI_MAL    },
    { "FindAPI_MHL",    TestFindAPI_MHL    },
    { "FindMod_A",      TestFindMod_A      },
    { "FindMod_W",      TestFindMod_W      },
    { "FindMod_AL",     TestFindMod_AL     },
    { "FindMod_WL",     TestFindMod_WL     },
    { "FindAPI_A",      TestFindAPI_A      },
    { "FindAPI_W",      TestFindAPI_W      },
    { "Forwarded",      TestForwarded      },
    { "NotFound",       TestNotFound       },
    { "NULLArgument",   TestNULLArgument   },
    { "CalcModHash32",  TestCalcModHash32  },
    { "CalcModHash64",  TestCalcModHash64  },
    { "CalcProcHash32", TestCalcProcHash32 },
    { "CalcProcHash64", TestCalcProcHash64 },
};

#endif // TEST_H
