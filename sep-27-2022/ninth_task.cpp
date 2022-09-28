#include <iostream>
#include <string>

std::string replaceAll(const std::string& s, const std::string& t, const std::string& r) 
{
    std::string str = "";
    
    for (int i = 0; i < s.length(); ++i) 
    {
        while (t.find(s[i]) != -1) 
   	{
            str += r;
            ++i;
        } 
        
 	str += s[i];
    }

return str;
}

int main() 
{
    std::cout << replaceAll("hello world", "l", "ch") << std::endl;
    
return 0;
}
