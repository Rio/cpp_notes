#include <iostream>
using namespace std;  // otherwise you'd use std::cout to access cout

int main() {

    bool true_boolean = true;
    bool false_boolean = false;
    cout << "This is a bool set to true: " << true_boolean << endl;
    cout << "This is a bool set to false: " << false_boolean << endl;
    cout << "A boolean has a size of " << sizeof(bool) << " byte(s)." << endl;
    cout << endl;

    char a_character = 'a';
    char d_character = '$';
    char numbered_character = 100;
    char number_character = '9';
    cout << "The character" << endl;
    cout << "Set like this: char a_character = 'a';" << endl;
    cout << "This is a char set to 'a': " << a_character << endl;
    cout << "This is a char set to '$': " << d_character << endl;
    cout << "This is a char set to 100: " << numbered_character << endl;
    cout << "This is a char set to '9': " << number_character << endl;
    cout << "A char has a size of " << sizeof(char) << " byte(s)." << endl;
    cout << endl;

    unsigned short int fourtytwo_short_uint = 42;
    unsigned short int max_short_uint = 65535;
    unsigned short int min_short_uint = 0;
    unsigned short int negative_short_uint = -42;
    cout << "The unsigned short integer" << endl;
    cout << "Set like this: unsigned short int short_uint = 0;" << endl;
    cout << "This is a unsigned short int set to 42: " << fourtytwo_short_uint << endl;
    cout << "This is a unsigned short int set to its maximum: " << max_short_uint << endl;
    cout << "This is a unsigned short int set to its minimum: " << min_short_uint << endl;
    cout << "This is a unsigned short int set to -42: " << negative_short_uint << endl;
    cout << "A unsigned short int has a size of " << sizeof(unsigned short int) << " byte(s)." << endl;
    cout << endl;

    short int fourtytwo_short_int = 42;
    short int max_short_int = 32767;
    short int min_short_int = -32768;
    short int negative_short_int = -42;
    cout << "The short integer" << endl;
    cout << "Set like this: short int short_int = 0;" << endl;
    cout << "This is a short int set to 42: " << fourtytwo_short_int << endl;
    cout << "This is a short int set to its maximum: " << max_short_int << endl;
    cout << "This is a short int set to its minimum: " << min_short_int << endl;
    cout << "This is a short int set to -42: " << negative_short_int << endl;
    cout << "A short int has a size of " << sizeof(short int) << " byte(s)." << endl;
    cout << endl;

    cout << "Then there are some more variables that can hold larger numbers." << endl;
    cout << "A unsigned long int has a size of " << sizeof(unsigned long int) << " byte(s)." << endl;
    cout << "A long int has a size of " << sizeof(long int) << " byte(s)." << endl;
    cout << "A unsigned long long has a size of " << sizeof(unsigned long long) << " byte(s)." << endl;
    cout << "A long long has a size of " << sizeof(long long) << " byte(s)." << endl;
    cout << "A int has a size of " << sizeof(int) << " byte(s)." << endl;
    cout << "A unsigned int has a size of " << sizeof(unsigned int) << " byte(s)." << endl;
    cout << "A float has a size of " << sizeof(float) << " byte(s)." << endl;
    cout << "A double has a size of " << sizeof(double) << " byte(s)." << endl;
    cout << endl;
    return 0;
}
