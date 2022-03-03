/*Write an application calculating the product of two floating-point numbers entered by the user and printing it on the screen:*/

#include <iostream>

int main() {
	int a{};
	int b{};
	std::cout << "Pleas input first number: ";
	std::cin >>  a;
	std::cout << "Pleas input second number: ";
	std::cin >>  b;

	std::cout << "Result: " << (a * b);
	return 0;
}
