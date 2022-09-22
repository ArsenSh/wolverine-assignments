#include <iostream>
#include <map>

double plus(double num1, double num2)
{
    return num1 + num2;
}

double minus(double num1, double num2)
{
    return num1 - num2;
}

double mul(double num1, double num2)
{
    return num1 * num2;
}

double div(double num1, double num2)
{
    return num1 / num2;
}
int main()
{
    std::map<char,double(*)(double, double)> mmap;
    double num1, num2;
    char operation;

    std::cout <<"Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    do{
        std::cout << "Enter the arithmetical operation type(*,/,+,-): ";
        std::cin >> operation;
      }while((operation != '*') && (operation != '/') && (operation != '+') && (operation != '-') );

    mmap['+'] = plus;
    mmap['-'] = minus;
    mmap['*'] = mul;
    mmap['/'] = div;

    std::cout << "The result is: " << mmap[operation](num1,num2) << std::endl;

    return 0;
}
