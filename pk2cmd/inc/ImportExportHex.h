#pragma once

#include "PICkitFunctions.h"

#define MAX_LINE_LEN 80

class CImportExportHex {
public:
    CImportExportHex();

    ~CImportExportHex();

    static bool ImportHexFile(_TCHAR *filePath, CPICkitFunctions *picFuncs);

    static bool ImportBINFile(_TCHAR *filePath, CPICkitFunctions *picFuncs);

    static int ParseHex(const _TCHAR *characters, int length);

    static bool ExportHexFile(_TCHAR *filePath, CPICkitFunctions *picFuncs);

    static bool ExportBINFile(_TCHAR *filePath, CPICkitFunctions *picFuncs);

    static unsigned char computeChecksum(_TCHAR *fileLine);

protected:

};
