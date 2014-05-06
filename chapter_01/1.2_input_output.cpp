// For input and output the standard library that comes with c++ handles it through the
// iostream library. There are two types defined in there that respresent the input and
// output streams. Aptly named istream and ostream.
//
// The objects that take care of that are cin, cout, cerr, clog.
// cin is used to get data from the standard input.
// cout is used to output data to the standard output.
// cerr is used to output data to the standard error.
// cout is used to output data to the log output.

// To get access to these objects we include the iostream library.
// the include tells the compiler to use the iostream library. The name
// inside the angled brackets refers to a header. Every program that wants
// to use a library has to include its associated header. By convention we
// put all those includes at the top of the program.
#include <iostream>

int main() {

    // Here we have and expression that uses the << operator on two operands:
    // the cout object and a string literal and links to another << operator 
    // that uses its outcome as one operand and the endl object. 
    // It is the equivalent of 1 + 2 + 3 and (1 + 2) + 3.
    std::cout << "Enter two numbers:" << std::endl;

    // The same thing could also be written in two statements like this:
    // std::cout << "Enter two numbers:"
    // std::cout << std::endl;
    //
    // The first line prints out the sequence of characters in the quotation marks.
    // The second line has the effect of ending the current line and flushing the
    // buffer that is associated with the device. In this case that would be cout.
    // This ensures that all that output is written to the output stream and is no
    // longer contained in memory.
    //
    // The std infront of the cout objects means that they live in the std namespace.
    // It is the namespace all objects from the standard library live in. It is a way
    // of seperating the names we give our classes, functions and variables in our
    // programs from the stuff in all of the other libraries. The :: operator is the
    // scope operator and is a way of telling the compiler that we want to use the cout
    // object that lives in the std namespace.

    // Here we define two variables to hold the input values we get from the user.
    // We define them as an integer using the int type and we initialize them to 0.
    // It is good programming style to initialize your variables in the same statement
    // where you define them.
    int number1 = 0, number2 = 0;

    // Were we use the >> operator to get stuff out of the cin object. It works the same
    // way as the << operator but in the oposite direction. It also works in the same way
    // with contcatenation: (std::cin >> number1) >> number2. This will execute as two requests.
    //
    // std::cin >> number1;
    // std::cin >> number2;
    std::cin >> number1 >> number2;

    // This is just a longer version of the above cout lines. It also contains the expression
    // number1 + number2 that returns a result.
    std::cout << "The sum of " << number1 << " and " << number2 << " is " << number1 + number2 << std::endl;

    return 0;
}
