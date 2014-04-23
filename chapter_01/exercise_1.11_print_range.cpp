#include <iostream>

int main() {

    int range_start = 0, range_end = 0;

    std::cout << "Enter a start and end:" << std::endl;

    std::cin >> range_start;
    std::cin >> range_end;

    while (range_start <= range_end) {

        std::cout << range_start << std::endl;

        ++range_start;
    }

    return 0;
}
