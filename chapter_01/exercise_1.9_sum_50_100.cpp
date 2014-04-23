#include <iostream>

int main() {

    int sum = 0, value = 50;

    while (value <= 100) {
        sum += value;

        ++value;
    }

    std::cout << "Sum of 50 to 100 inclusive is ";
    std::cout << sum;
    std::cout << std::endl;

    return 0;
}
