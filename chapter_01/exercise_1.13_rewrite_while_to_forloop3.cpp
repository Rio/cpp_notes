#include <iostream>

int main() {

    int range_start = 0, range_end = 0;

    std::cout << "Enter a start and end:" << std::endl;

    std::cin >> range_start;
    std::cin >> range_end;

    for (int i = range_start; i <= range_end; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}
