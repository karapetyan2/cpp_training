/*Write an application to check whether a character entered by the user is an alphabet or not.*/

#include <iostream>

int main() {
	char x;
	std::cout << "Pleas type something: "; 
	std::cin >> x;

	if((x>='a' && x<='z') || (x>='A' && x<='Z')) {
	std::cout << x << " is an Alphabet" << std::endl;
	
	}else {
		std::cout << x << " isn't an Alphabet" << std::endl;
	}
	return 0;
}
