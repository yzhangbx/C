#include <Windows.h>

extern "C" VOID MsgBox(char *szMsg);
#pragma comment (lib, "TestDLL")

int main(int argc, char* argv[])
{
    MsgBox("DLL works!");
    return 0;
}
