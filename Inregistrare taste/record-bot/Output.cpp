#include "includes.h"


void Output()
{
	SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_VIRTUAL_TERMINAL_PROCESSING);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	system("cls");

	if (record_State)
	{
		SetConsoleTextAttribute(hConsole, 10);
		std::cout << "Inregistrare [Tasta F1]" << std::endl;
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 4);
		std::cout << "Inregistrare [Tasta F1]" << std::endl;
	}

	/*
	if (play_State)
	{
		SetConsoleTextAttribute(hConsole, 10);
		std::cout << "Redare [Tasta F2]" << std::endl;
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 4);
		std::cout << "Redare [Tasta F2]" << std::endl;
	}
	*/

}