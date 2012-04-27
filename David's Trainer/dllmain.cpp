#include "dllmain.h"
#include "gui.h"

HINSTANCE g_h_main_instance;

//BOOL WINAPI DllMain(__in HINSTANCE hinstDLL, __in DWORD fdwReason, __in LPVOID lpvReserved)
//{
//  switch(fdwReason)
//  {
//  case DLL_PROCESS_ATTACH:
//    g_h_main_instance = hinstDLL;     
//    DisableThreadLibraryCalls(hinstDLL);     
//    CreateThread(0, 0, CreateGUIThread, 0, 0, 0); 
//    break;
//  }
//  return TRUE;
//}

BOOL WINAPI DllMain ( HMODULE hDll, DWORD dwReason, LPVOID lpReserved )
{
	DisableThreadLibraryCalls(hDll);

	if ( dwReason == DLL_PROCESS_ATTACH )
	{
		g_h_main_instance = hDll;     
		DisableThreadLibraryCalls(hDll);     
		CreateThread(0, 0, CreateGUIThread, 0, 0, 0); //Love you <33333 lol.
	}
	return TRUE;
}