#pragma once
#include "includes.h"

bool record_State = false;
bool play_State = false;

int main()
{

	Output();

	while (true)
	{
		check_Binds();
		
		if (record_State)
			record();

		if (play_State)
		{
			//play();
		}

		//Sleep(1);
	}

	return 0;

}