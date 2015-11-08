// U235.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{

	getConsoleAttri();

	printColor("Uranium 235\n\n", 10);
	printColor("Written by Yuri Kircovich\n", 10);
	printColor("\n-----------\n\n", 15);
	printColor("1] New Game\n\n", 10);
	printColor("2] Load Game\n\n", 10);
	printColor("3] Options\n\n", 10);
	printColor("4] Quit\n\n", 10);
	printColor("-----------\n\n", 15);

	inputField();

    return 0;

}