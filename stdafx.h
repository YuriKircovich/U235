// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include <map>
#include <algorithm>

static HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);

static CONSOLE_SCREEN_BUFFER_INFO csbi;

//Used in consoleColors.cpp
void printColor(std::string args, int color);
void getConsoleAttri();

//Used in inputField.cpp
void inputField();
bool string_is_valid(const std::string &str);
bool string_is_digit(const std::string &str);


// TODO: reference additional headers your program requires here
