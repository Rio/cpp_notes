#include <iostream>
using namespace std;

int main() {
    int age = 25;

    cout << "the variable age is an integer with a value of " << age << endl;
    cout << "but the variable actually points to a memory addres that contains the value of the integer." << endl;
    cout << "the address of age is found by reading it's reference with &age: " << &age << endl;
    cout << endl;

    cout << "so a variable is actually a pointer pointing to a address in memory" << endl;
    cout << "containing the value of the variable. A pointer is a variable for memory addresses so to speak." << endl;

    // Declaring a variable
    char a_letter = 'r';

    // Declaring a pointer to the same type and initializing to the address of the previous variable
    char* my_pointer = &a_letter;

    cout << "char is: " << a_letter << endl;
    cout << "char address is: " << my_pointer << endl;

    return 0;
}
