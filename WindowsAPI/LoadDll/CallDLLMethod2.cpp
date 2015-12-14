#include <Windows.h>

typedef VOID (*PFUNMSG) (char *);

int main(int argc, char* argv[])
{
    HMODULE hModule = LoadLibrary("TestDLL.dll");
    if(hModule == NULL)
    {
        MessageBox(NULL, "TestDLL.dll not exist!", "DLL load failed", MB_OK);
        return -1;
    }
    
    PFUNMSG pFunMsg = (PFUNMSG)GetProcAddress(hModule,"MsgBox");
    pFunMsg("Dll works!");
    return 0;
}
