#include <iostream>

int main() {

    std::cout << "Enter two numbers:" << std::endl;

    int number1 = 0;
    int number2 = 0;

    std::cin >> number1;
    std::cin >> number2;

    std::cout << "The sum of " << number1;
    std::cout << " and " << number2;
    std::cout << " is " << number1 + number2 << std::endl;

    return 0;
}
