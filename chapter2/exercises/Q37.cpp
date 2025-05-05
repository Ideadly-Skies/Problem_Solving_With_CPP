/* main program invocation */
#include <iostream>
using namespace std;
int main( ){
    // named constant 
    const double LITERS_PER_GALLON = 3.78533; 
    double gallons;

    // prompt user for number of gallons
    cout << "please input number of gallons: ";
    cin >> gallons;

    // output number of liters per gallon
    double num_of_liters = gallons * LITERS_PER_GALLON;

    // set precision of cout 
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);
    
    // output number of liters
    cout << "number of liters: " << num_of_liters << endl;
    
    return (0);
}