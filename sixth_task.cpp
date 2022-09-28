#include <iostream>

std::string toLowercase(std::string& str)
{
	for(int i = 0; i < static_cast<int>(str.length()); ++i)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{	
			str[i] += 32;
		}
	}

return str;
}

int main()
{
	std::string str;
	std::cout << "Enter your string: ";
	getline(std::cin, str);
	
	std::cout << toLowercase(str) << std::endl;

return 0;
}
