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
	Option(std::string optionNum)
	{
		this->optionNum = optionNum;
		lastOption = optionNum;
	}
	void ChooseOption()
	{
		std::string line;
		bool toRead = false;
		bool haveSpecifier = false;
		std::ifstream myfile("options.txt");
		//system("CLS");
		std::string stopMarker = this->optionNum + '#';
		myfile.seekg(std::ios::beg);
		while (getline(myfile, line))
		{
			if (line == stopMarker)
			{
				toRead = false;
				break;
			}
			if (toRead)
			{
				for (int i = 0; i < line.size(); i++)
				{
					if (line[i] == '-')
					{
						haveSpecifier = true;
						this->optionName = line.substr(0, i);
						this->optionAdditionalInfo = line.substr(i + 1, line.size());
					}
				}	
				if (!haveSpecifier)
				{
					this->optionName = line;
				}
				std::cout << "optionNum: " << this->optionNum << std::endl;
				std::cout << "optionName: " << this->optionName << std::endl;
				std::cout << "optionAdditionalInfo: " << this->optionAdditionalInfo << std::endl;
			}
			if (line == this->optionNum)
			{
				toRead = true;
			}
		}
	}

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