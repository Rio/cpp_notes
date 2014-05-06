#include <iostream>

int main() {

    int sum = 0;

    for (int value = 50; value <= 100; ++value) {
        sum += value;
    }

    std::cout << "Sum of 50 to 100 inclusive is ";
    std::cout << sum;
    std::cout << std::endl;

    return 0;
}
