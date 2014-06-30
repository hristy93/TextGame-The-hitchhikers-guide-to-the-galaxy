#ifndef GUARD_HEADER_PLAYER_OPTION
#define GUARD_HEADER_PLAYER_OPTION

#include<iostream>
#include <fstream>
#include <conio.h>
#include <string>

class Option
{
private:
	std::string optionNum;
	std::string optionName;
	std::string optionAdditionalInfo = "";
public:
	static std::string lastOption;

	Option(std::string optionNum);

	void ChooseOption();

	std::string GetOptionName()
	{
		return this->optionName;
	}

	std::string GetOptionAdditionalInfo()
	{
		return this->optionAdditionalInfo;
	}
};
#endif