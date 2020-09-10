#pragma once

#include "PICkitFunctions.h"

#define MAX_LINE_LEN 80

class CImportExportHex {
public:
    CImportExportHex(void);

    ~CImportExportHex(void);

    static bool ImportHexFile(_TCHAR *filePath, CPICkitFunctions *picFuncs);

    static bool ImportBINFile(_TCHAR *filePath, CPICkitFunctions *picFuncs);

    static int ParseHex(const _TCHAR *characters, int length);

    bool ExportHexFile(_TCHAR *filePath, CPICkitFunctions *picFuncs);

    static bool ExportBINFile(_TCHAR *filePath, CPICkitFunctions *picFuncs);

    static unsigned char computeChecksum(_TCHAR *fileLine);

protected:

};
