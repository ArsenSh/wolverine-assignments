#include <iostream>


int main()
{

    int a = 0, b = 0, c = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    int av = 0;
    av = (a + b + c) / 3;
    std::cout << "The average is: " << av << std::endl;
    return 0;
}
