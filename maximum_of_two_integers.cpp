#include <iostream>

int main ()
{
	int num1 = 0;
	int num2 = 0;

	std::cout << "Enter first integer: ";
	std::cin >> num1;
	std::cout << "Enter second integer: ";
	std::cin >> num2;
	
	if(num1 <= num2)
       	 {
		std::cout << "The maximum is: " << num2 << std::endl;
	 } 
	else
	 {
		std::cout << "The maximum is: " << num1 << std::endl;
	 }

return 0;
}
