#include "stdafx.h"

/*Commonly used colors:
	FG:BRI GREEN, BG:REG BLACK   - 10 (0x0A)
	FG:BRI WHITE, BG REG BLACK   - 15 (0x0F)
*/

void getConsoleAttri() {

	GetConsoleScreenBufferInfo(hstdout, &csbi);

	return;

}

//Prints text (args) with colored text (color)
void printColor(std::string args, int color) {

	SetConsoleTextAttribute(hstdout, color);

	std::cout << args;

	SetConsoleTextAttribute(hstdout, csbi.wAttributes);

	return;

}