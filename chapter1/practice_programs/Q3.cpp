// the program starts here
#include <iostream>
using namespace std;

int main(){
    // variable declarations
    int num1, num2, sum;

    // prompt user for numbers
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: "; 
    cin >> num2;

    // compute sum of two numbers
    sum = num1 + num2;
    cout << "the sum of ";
    cout << num1;
    cout << " and ";
    cout << num2;
    cout << " is ";
    cout << sum;

    // return statement
    return (0);
}