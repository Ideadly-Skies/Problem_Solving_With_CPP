#include <iostream>
using namespace std;
int main( ){
    // variables to store keyboard input
    int hours;
    double grossPay, rate;
    
    // user prompt
    cout << "Enter the hourly rate pay: $";
    cin >> rate;
    cout << "Enter the number of hours worked.\n"
         << "rounded to a whole number of hours: ";
    cin >> hours;    
    
    // grossPay calculation 
    if (hours > 40)
        grossPay = rate * 40 + 1.5 * rate * (hours - 40);
    else
        grossPay = rate * hours;

    // setting precision and output 
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Hours = " << hours << endl;
    cout << "Hourly pay rate = $" << rate << endl;
    cout << "Gross pay = $" << grossPay << endl;

    return (0);
}