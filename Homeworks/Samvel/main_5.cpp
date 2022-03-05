/*Write an application which takes input from the user and calculates the sum up to the entered natural number:*/
#include <iostream>

int main() {
    int x=0, n;

    std::cout << "Please type number: ";
    std::cin >> n;

    for (int i = 1; i <=n; ++i) {
        x += i;
    }

    std::cout << "Sum in the natural numbers:  " << x << std::endl;
    return 0;
}


