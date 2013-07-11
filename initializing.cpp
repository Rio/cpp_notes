#include <iostream>
using namespace std;  // otherwise you'd use std::cout to access cout

int main() {

    int integer = 0; // be sure to initialize all variables otherwise you can pick up garbage from memory
    int uninit_int;

    cout << "This is an initialized integer: " << integer << endl;
    cout << "This is a non-initialized integer: " << uninit_int << " Look! Garbage!" << endl;
    return 0;
}
