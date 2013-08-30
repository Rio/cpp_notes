#include <iostream>
using namespace std;

int main(){
    int Number = 3; //integer variable Number initialized to 3
    cout << "integer Number: " << Number << endl;
    int* pNum1 = &Number; //pointer integer created that holds the address to Number
    cout << "address of Number: " << &Number << endl;
    cout << "value of pNum1: " << pNum1 << endl;
    cout << "value in addres of pNum1: " << *pNum1 << endl;
    *pNum1 = 20; //the memory is accessed where the integer 3 lives through the pointer and is set to 20
    cout << "integer Number: " << Number << endl;
    cout << "value of pNum1: " << pNum1 << endl;
    cout << "value in addres of pNum1: " << *pNum1 << endl;
    int* pNum2 = pNum1; // another pointer is created that holds the exact same address as pNum1
    Number *= 2; // the integer in Number that is now 20 is multiplied by 2 and assigned back to Number
    cout << "integer Number: " << Number << endl;
    cout << "value of pNum2: " << pNum2 << endl;
    cout << "value in addres of pNum2: " << *pNum2 << endl;
    return 0;
}
