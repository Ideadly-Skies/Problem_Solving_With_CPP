/* entry point of the program */
#include <iostream>
using namespace std;
int main( ){
    // variable declaration
    int temperature, pressure;

    // prompt the user
    cout << "please input the value for temperature: ";
    cin >> temperature;
    cout << "please input the value for pressure: ";
    cin >> pressure;

    // control flow (if-else)
    if (temperature >= 100 || pressure >= 200)
        cout << "Warning"; 
    else 
        cout << "OK";

    // return statement
    return (0);
}