/*Write an application which takes input from the user and calculates the sum up to the entered natural number:*/
#include <iostream>

int main() {
    int num; 
    int x{0};

    std::cout << "Pleas type number: ";
    std::cin >> num;

    for (int i = 1; i <=num; ++i) {
        x += i;
    }

    std::cout << "Sum in the natural numbers:  " << x;
    return 0;
}


