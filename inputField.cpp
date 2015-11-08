#include "stdafx.h"

void inputField() {

	bool loopExit = true;

	while (loopExit == true) {

		std::string input;

		std::cin.clear();

		getline(std::cin, input);

		//std::cin.ignore(INT_MAX);

		std::transform(input.begin(), input.end(), input.begin(), ::tolower);

		if (string_is_valid(input)){

			if (string_is_digit(input)) {
				
				if (std::stoi(input) == 4)
					return;

				else
					printColor("Not a valid input or not implimented!\n", 12);

			}

			else{
				printColor("Not a valid input!\n", 12);
			}

		}

		else{
			printColor("Not a valid input!\n", 12);
		}

	}

	return;

}

bool string_is_valid(const std::string &str){
	return find_if(str.begin(), str.end(), [](char c) {return !(isalnum(c) || (c == ' ')); })
		== str.end();
}

bool string_is_digit(const std::string &str){
	return find_if(str.begin(), str.end(), [](char c) {return !(isdigit(c) || (c == ' ')); })
		== str.end();
}