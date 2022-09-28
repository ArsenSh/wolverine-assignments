#include <iostream>
#include <fstream>
#include <string>



int main()
{
    std::ifstream file;
    std::string path = "";
    
    do{
        std::cout << "Enter file name: ";
        std::cin >> path;
        file.open(path + ".txt");
      }while(!file.is_open());

    std::ofstream f;
    f.open("result.txt");
    std::string token{};
    while(!file.eof())
    {
        file >> token;
        if(token[token.length() - 1] == ',')
        {
            token.erase(token.length() - 1);
        }
        f << token;
        f << "\n";
    }
    f.close();
    
    file.close();
    
    return 0;
}
