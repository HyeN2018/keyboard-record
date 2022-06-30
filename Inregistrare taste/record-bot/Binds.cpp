#pragma once
#include "includes.h"

void check_Binds()
{
	if (GetAsyncKeyState(VK_F1))
	{
		record_State = !record_State;
		Output();
		Sleep(100);
	}

	if (GetAsyncKeyState(VK_F2))
	{
		play_State = !play_State;
		Output();
		Sleep(100);
	}
}