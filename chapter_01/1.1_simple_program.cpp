// Every c++ program must contain at least one function that has to be named main.
// This will be the entry point of the program. The function must return an integer.
// And the integer that is returned will inform the operating system of the exit
// status of the program. Often a status of 0 means that it was successfull.
// Negative 1 often means something went wrong. You can check the return value of
// any program by running this on the commandline after the program has run:
//
// $ echo $?
//
// Note that often it is an unsigned integer that is returned. So when -1 is returned
// and you check that value with the command given earlier -1 is wrapped to 255
// because an unsigned integer can not represent negative numbers.


// This is a normal function definition. First the type of the return value is set.
// In the case of the main function it has to be an integer. You can recognise it
// by int below. Next it is the name of the function. After that between parentheses
// the arguments can optionally be given to the function. The a block of code will
// define the body of the function. Inside the function a return statement has to
// be set. It has to return the type that is set at the start of the function
// definition. In this case it has to be an integer. If a function doesn't return
// anything its return value has to be set to void.
int main() {

    //Convention dictates that a return value of 0 means that everything went fine.
    return 0;

    //return -1;
    //return 1;

}
