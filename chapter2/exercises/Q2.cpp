#include <iostream>
#include <string>
using namespace std;

int main( ){
    // variable declaration
    int count = 0;
    double distance = 1.5;

    // output information to user 
    cout << "current count: " + to_string(count) + " unit" << endl;   
    cout << "current distance: " + to_string(distance) + " km" << endl;

    // input demo
    int one, two;
    cout << "enter two numbers (separate them w a space and then press return): ";
    cin >> one >> two;

    // output the input from input stream
    cout << "the number you inputted are " << one << " and " << two;

    // return statement
    return (0);
}