#include <iostream>
using namespace std;

/* begin program invocation */
int main( ){
    // declare variables num1 and num2
    int num1, num2;
    
    // prompt user to input number
    cout << "enter a number: ";
    cin >> num1;
    cout << "enter another number: ";
    cin >> num2;
    
    // compute whole number part and remainder
    int whole_number_part = num1 / num2;
    int remainder = num1 % num2;

    // output whole number part and remainder
    cout << num1 << "/" << num2 << " = " << whole_number_part << endl;
    cout << "remainder: " << remainder << endl;

    return (0);
}