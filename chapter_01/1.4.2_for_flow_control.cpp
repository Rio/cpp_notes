#include <iostream>

int main() {
    int sum = 0;

    // This is essentially the same as the while loop.
    // Only we define the testing variable, the test condition 
    // and the incrementing of the variable in the for statement itself.
    for (int value = 0; value <= 10; ++value) {
        sum += value;
    }

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}
