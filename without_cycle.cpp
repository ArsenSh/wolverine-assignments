#include <iostream>

int main ()
{
    int num = 0;
    int your_num;

    std::cout << "Enter your num: ";
    std::cin >> your_num;

    update:

            std::cout << num++ << std::endl;
            if(num == your_num + 1){return 0;}
            goto update;
}
