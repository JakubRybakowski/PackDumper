#include "Header/pch.h"

BOOL WINAPI DllMain ( HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved )
{
	static bool Injected = false;

	if ( !Injected )
	{
		switch ( fdwReason )
		{
			case DLL_PROCESS_ATTACH:
			{
				Injected = true;

				DisableThreadLibraryCalls ( hinstDLL );

				gb::hLibMod = hinstDLL;

				HANDLE hThread = CreateThread ( 0, 0, ( LPTHREAD_START_ROUTINE ) CDumper::InitMenu, 0, 0, 0 );

				if ( hThread ) CloseHandle ( hThread );

				break;
			}
		}
	}

	return TRUE;
}