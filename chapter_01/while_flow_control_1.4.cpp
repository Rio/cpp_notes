#include <iostream>

int main() {

    // These variables are used inside the while loop
    int sum = 0, value = 1;

    // As long as this condition is true this block of code is executed.
    // So as long as value is smaller or equal to 10 run it.
    while (value <= 10) {
        // Here we add the variable value to the variable sum.
        // The += operator is short hand for sum = sum + value.
        sum += value;

        // Here we increment value by 1.
        // The ++ operator is short hand for value = value + 1.
        ++value;

        // When the loop gets here it will evaluate the while condition
        // at the top again and if it is false it will continue with
        // the rest of the code below.
    }

    // We print the result of the additions we did in the while loop.
    std::cout << "Sum of 1 to 10 inclusive is ";
    std::cout << sum;
    std::cout << std::endl;

    // And we return 0 to indicate the program ran normally.
    return 0;
}
