#include <iostream>
#include <map>

enum Colors {Red = 1, Green, Blue, Yellow, Black};

std::map<Colors, std::string> create_map();
std::string to_string(const Colors&);
Colors to_enum(const std::string&);




int main()
{
    std::cout << to_string(Colors::Green) << std::endl;
    std::cout << to_enum("Green") << std::endl;
    
    return 0;
}

std::string to_string(const Colors& color)
{
    for(auto a : create_map())
    {
        if(a.first == color)
        {
            return a.second;
        }
    }
    return "Do not exist that color";
}

std::map<Colors, std::string> create_map()
{
    std::map<Colors, std::string> mmap;
    mmap[Colors::Red] = "Red";
    mmap[Colors::Green] = "Green";
    mmap[Colors::Blue] = "Blue";
    mmap[Colors::Yellow] = "Yellow";
    mmap[Colors::Black] = "Black";
    return mmap;
}

Colors to_enum(const std::string& color)
{
    for (auto& a : create_map())
    {
        if (a.second == color)
        {
            return a.first;
        }
    }
    return (Colors)std::string::npos;;
}

