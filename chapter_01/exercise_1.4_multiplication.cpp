#include <iostream>

int main() {
    
    std::cout << "Enter two numbers:" << std::endl;

    int n1 = 0, n2 = 0;

    std::cin >> n1;
    std::cin >> n2;

    std::cout << n1 << " times " << n2 << " equals " << n1 * n2 << "." << std::endl;

    return 0;
}
