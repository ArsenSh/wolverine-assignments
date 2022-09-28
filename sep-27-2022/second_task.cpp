#include <iostream>
#include <string>

std::string Ltrim(std::string& str)
{
    int amount = 0;

    for(int i = 0; i < static_cast<int>(str.length()); i++)
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

    return str;
}

int main()
{
    std::string str = "          Vaxo kraki hetes xaxum   Vaxooo";
    
    Ltrim(str);
    std::cout << str << std::endl;
    
    return 0;
}
