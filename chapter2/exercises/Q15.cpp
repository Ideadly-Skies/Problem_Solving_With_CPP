// imports above
#include <iostream>
using namespace std;

int main( ){
    /* variable declaration */
    double x, y, z;

    /* prompt user for input */
    cout << "please enter a number: ";
    cin >> x;
    cout << "please another number: ";
    cin >> y;
    cout << "please enter yet another number: ";
    cin >> z;
    
    /* perform calculation */
    cout << "3x = (" << 3 << " * " << x << ") = " << (x * 3) << endl;
    cout << "3x + y = (" << 3 << " * " << x << ") + " << y << " = " << (x * 3 + y) << endl;
    cout << "(x + y) / 7 = (" << x << " + " << y << ") " << "/ " << 7 << " = " << (x + y) / 7 << endl; 
    cout << "(3x + y) / (z + 2) = " << "(3*" << "x" << " + " << "y" << ") / (" << "z + " << 2 << ")"
    << " = " << (3 * x + y) / (z + 2) << endl; 

    /* return statement */
    return (0);
}