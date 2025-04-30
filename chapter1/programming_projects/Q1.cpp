// program begins here
#include <iostream>
using namespace std;

int main(){
    // variable declaration
    int first, second, sum, product;

    // prompt user for input
    cout << "enter the first number: ";
    cin >> first;
    cout << "enter the second number: ";
    cin >> second;

    // output sum to stdout 
    sum = first + second; 
    cout << "the sum of ";
    cout << first;
    cout << " and ";
    cout << second;
    cout << " is "; 
    cout << sum;
    cout << "\n"; // 

    // output product to stdout
    product = first * second;
    cout << "the product of ";
    cout << first;
    cout << " and ";
    cout << second;
    cout << " is ";
    cout << product;

    // return statement
    return (0);
}