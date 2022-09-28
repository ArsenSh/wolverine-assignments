//Task wants to write code which will change the lowercase letters in uppercase

#include <iostream>

std::string toUppercase(std::string& str)
{

	for(int i = 0; i < static_cast<int>(str.length()); ++i)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

return str;
}


int main()
{
	std::string str;
	std::cout << "Enter your string: ";
	getline(std::cin, str);

	std::cout << toUppercase(str) << std::endl;

return 0;
}
