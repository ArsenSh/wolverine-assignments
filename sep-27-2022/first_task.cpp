// Task for writing a function, whcih will delete the whitespace from right sidein string

#include <iostream>
#include <string>

std::string rtrim(std::string& str)
{
    for(int i = static_cast<int>(str.length()) - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            str.erase(i);
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
    std::string str = "";
    std::cout << "Enter your string: ";
    getline(std::cin,str);
    rtrim(str);
    std::cout << str << std::endl;
    
    return 0;
}

