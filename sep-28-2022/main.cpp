//#include <iostream>
//#include <string>
//#include <vector>
//
//int lastIndexOf(const std::string& s, const std::string& p)
//{
//    std::string str = "";
//
//    for(int i = (int)(s.length()) - 1; i >= 0; i--)
//    {
//        if(s[i] == ',' || s[i] == ' ')
//        {
//            int j = 0;
//            while(j < p.length())
//            {
//                if(str[j] == p[j])
//                {
//                    ++j;
//                }
//                else
//                {
//                    break;
//                }
//
//                return i + 1;
//            }
//            str = "";
//        }
//        else
//        {
//            str = s[i] + str;
//        }
//    }
//
//
//
//    return -1;
//}
//
//int main()
//{
//    std::string str = "hello, I said hello";
//    std::string ktr = "hell";
//    std::cout << lastIndexOf(str,ktr) << std::endl;
//
//    return 0;
//}


//#include <iostream>
//
//std::string upper_to_lower_and_vice_versa(std::string& str)
//{
//    for (int i = 0; i < str.length(); i++)
//    {
//        if(str[i] >= 'A' && str[i] <= 'Z')
//        {
//            str[i] += 32;
//        }
//        else
//        {
//            str[i] -= 32;
//        }
//    }
//    return str;
//}
//
//int main()
//{
//
//    std::string str;
//    std::cout << "Enter your string: ";
//    getline(std::cin, str);
//
//    std::cout << upper_to_lower_and_vice_versa(str) << std::endl;
//
//    return 0;
//}


// 1. memset(void*, char val, size_t count) inicializacnum e cucichich sksac count hat byte, orinak memeset(arr,'a',4) ardyunqy klini aaaa
// 2. memcpy(void* src, void* dest, size_t n)
// 3. grel cragir vory kardum e file y, fili yuraqanchyur toxy taranjatum e storaket kam bacat nisherov, vorpes ardyunq stanal nor file, vory yuraqanchyur toxy taranjatvac barn e


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
