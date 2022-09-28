#include <iostream>
#include <string>

bool is_symbol(const char& ch)
{
	bool check = ((ch <= 90 && ch >= 65) || (ch <= 122 && ch >= 97));
	return check;
}

std::string split(std::string& s)
{
std::string str = "[";
str.push_back('"');
	
	for(int i = 0; i < static_cast<int>(s.length()); ++i)
	{
		if(is_symbol(s[i]))
		{
			str.push_back(s[i]);
		}
		else if(s[i] == ' ')
		{

		}
		else
		{
			str.push_back('"');
			str.push_back(',');
			str.push_back('"');
		}
	}
str.push_back('"');
str.push_back(']');

return str;
}



int main ()
{
	std::string str = " hel: lo, worl ' d";
	std::cout << split(str) << std::endl;

return 0;
}
