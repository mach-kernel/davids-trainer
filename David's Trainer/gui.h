#include <Windows.h>
#include <stdlib.h>
#include <CommCtrl.h>



DWORD WINAPI CreateGUIThread(__in LPVOID lParam);
INT_PTR CALLBACK DialogProc(__in HWND hwndDlg,__in UINT uMsg,__in WPARAM wParam,__in LPARAM lParam);