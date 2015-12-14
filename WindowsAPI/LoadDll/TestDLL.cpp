#include <Windows.h>
extern "C" __declspec(dllexport) VOID MsgBox(char *szMsg);

VOID MsgBox(char *szMsg)
{
    char szModuleName[MAX_PATH] = {0};
    GetModuleFileName(NULL,szModuleName,MAX_PATH);
    MessageBox(NULL,szMsg,szModuleName,MB_OK);
}


BOOL APIENTRY DllMain( HANDLE hModule,
                       DWORD ul_reason_for_call,
                       LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        {
            MsgBox("DLL_PROCESS_ATTACH");
            break;
        }
    case DLL_PROCESS_DETACH:
        {
            MsgBox("DLL_PROCESS_DETACH");
            break;
        }
    case DLL_THREAD_ATTACH:
        {
            bread;
        }
    case DLL_THREAD_DETACH:
        {
            break;
        }
    }
}
