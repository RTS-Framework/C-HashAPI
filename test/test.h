#ifndef TEST_H
#define TEST_H

#include "c_types.h"

// define unit tests
bool TestLibMemory();
bool TestLibString();
bool TestHashAPI();

typedef bool (*test_t)();
typedef struct { byte* Name; test_t Test; } unit;

static unit tests[] = {
    { "Lib_Memory", TestLibMemory },
    { "Lib_String", TestLibString },
    { "HashAPI",    TestHashAPI   },
};

#endif // TEST_H
