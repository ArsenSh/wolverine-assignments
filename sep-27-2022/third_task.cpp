//In this task I have to remove the whitespaces of string from left and right side

#include <iostream>
#include <string>

std::string trim(std::string& str)
{
	int amount = 0;
	for(int i = 0; i < static_cast<int>(str.length()); ++i)
	{
		if(str[i] == ' ')
		{
			++amount;	
		}
		else 
		{
			break;
		}
	}
	
	str.erase(0, amount);
	amount = 0;
	
	for(int i = static_cast<int>(str.length()) - 1; i >= 0; --i)
	{
		if(str[i] == ' ')
		{
			str.erase(i, 1);
		}
		else
		{
			break;
		}
	}

return str;
}

int main()
{
	std::string str = "    hello word      ";
	trim(str);

	std::cout << "|" << str << "|" << std::endl;

return 0;
}
