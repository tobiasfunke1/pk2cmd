#pragma once

#include "PICkitFunctions.h"

#define MAX_BLLINE_LEN 80

class Pk2BootLoader {
public:
    Pk2BootLoader();

    ~Pk2BootLoader();

    static bool ReadHexAndDownload(_TCHAR *fileName, CPICkitFunctions *picFuncs, int unitIndex);

    static bool ReadHexAndVerify(_TCHAR *fileName, CPICkitFunctions *picFuncs);

    static int ParseHex(const _TCHAR *characters, int length);
};
