/*Write an application to find the largest number among the three numbers entered by the user.*/
#include <iostream>

int main() {
	int a{};
	int b{};
	int c{};
	std::cout << "Please input first number: ";
	std::cin >>  a;
	std::cout << "Please input second number: ";
	std::cin >>  b;
	std::cout << "Please input third number: ";
	std::cin >>  c;
	
	std::cout << "" << std::endl;
	if(a > b && a > c) {
		std::cout << "Largest number: " << a << std::endl;	
	}else if(b > a && b > c) {
		std::cout << "Largest number: " << b << std::endl;
	}else if(c > a && c > b) {
		std::cout << "Largest number: " << c << std::endl;
	}
	
	std::cout << "" << std::endl;
	if(a == b) {
		std::cout << "Equal numbers: " << a << " = " << b << std::endl;
	}else if(b == c) {
		std::cout << "Equal numbers: " << b << " = " << c << std::endl;
	}else if(a == c) {
		std::cout << "Equal numbers: " << a << " = " << c << std::endl;
	}
	return 0;
}
