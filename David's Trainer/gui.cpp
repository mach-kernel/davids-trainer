#include "stdafx.h"
#include "gui.h"
#include "dllmain.h"
#include "DTMain.h"

using namespace DavidsTrainer;


[STAThreadAttribute]
DWORD WINAPI CreateGUIThread(__in LPVOID lParam)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew DTMain());
	return 0;

}




