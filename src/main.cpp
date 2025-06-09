#include <winapi.h>
include <windows.h>

using namespace std;

HSTEXT title = "Cheat Engine X100";
CONST INT = C000;
CONST baseAddr = 0x100000;
INT =readProcessMemory(0, baseAddr, &val, sizeof(val), null);

LONG STMSTContrls = {
    { "Scan",    0,   10, 70, 25 },
    { "Reset",   25,  10, 70, 25 }
};

LPROCESS currentProc = NULL;

RESULT createWindow() {
    HWINDOWSTR wstr;
    HWINDOW hwindow;

    hwindowCreateEx( ... );
    wstr["<TextBox Here>"] = title;
}

Int FooBareClick:() {
    tracemoder ();
    // Read/Write mem
}