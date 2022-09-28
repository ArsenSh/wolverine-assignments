#include <iostream>
#include <vector>

bool is_symbol(const char& ch)
{
	bool check = ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
	return check;
}

std::string startsWith(std::string& str, std::string& t)
{
	str.push_back(' ');
	std::string tmp = "";
	std::vector<std::string> vec;
	
	
	for(int i = 0; i < str.length(); ++i)
	{
		if(!is_symbol(str[i]) || str[i] == ',')
		{
			vec.push_back(tmp);
			tmp = vec[0];
			
			for(int j = 0; j < t.length(); ++j)
			{
				if(tmp[j] != t[j])
				{
					return "false";
				}
			}
			tmp = "";
		}
		else
		{
			tmp.push_back(str[i]);
		}
	}

return "true";
}



int main()
{
	std::string str;
	std::string t;
	std::cout << "Enter your sentence: ";
	getline(std::cin, str);
	std::cout << "Enter your string: ";
	std::cin >> t;

	std::cout << startsWith(str,t) << std::endl;


return 0;
}
