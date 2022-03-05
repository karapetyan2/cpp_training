/*Write an application calculating the product of two floating-point numbers entered by the user and printing it on the screen:*/

#include <iostream>

int main() {
	int a, b;
	std::cout << "Please input first number: ";
	std::cin >>  a;
	std::cout << "Please input second number: ";
	std::cin >>  b;

	std::cout << "Result: " << (a * b) << endl;
	return 0;
}
