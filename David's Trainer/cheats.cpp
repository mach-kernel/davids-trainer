#include "cheats.h"
#include "stdafx.h"

BOOL WriteAddress(__in LPVOID lpcvBase, __in LPCVOID lpcvWriteValue, __in size_t uSize)
{
	DWORD old_protection = 0;

	__try 
	{  
		if(VirtualProtect(lpcvBase, uSize, PAGE_READWRITE, &old_protection)) 
		{
			memcpy_s(lpcvBase, uSize, lpcvWriteValue, uSize);
			VirtualProtect(lpcvBase, uSize, old_protection, &old_protection);
		}
		else
			return FALSE;
	}  
	__except(EXCEPTION_EXECUTE_HANDLER) 
	{		
		return FALSE;
	}
	return TRUE;
}

VOID BlinkGodMode(__in BOOL bEnable) // This first line is exact line as in cheats.h.
{
	static BYTE normalbytes[] = {0x0f, 0x86}; //DISABLED bytes of the hack
	static BYTE hackonbytes[] = {0x0f, 0x83}; //ENABLED bytes of the hack
	static DWORD HackAddr = 0x00A00A00; //Addresse of the hack

	if(bEnable)
		WriteAddress((LPVOID)HackAddr, hackonbytes, 2); //Number of ENABLED bytes...
	else
		WriteAddress((LPVOID)HackAddr, normalbytes, 2); //Number of DISABLED bytes...
}