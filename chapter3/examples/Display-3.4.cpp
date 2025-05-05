#include <iostream>
using namespace std;

/* dangling else problem */
int main(  ){
    // variable to store fuelGaugeReading
    double fuelGaugeReading;

    cout << "Enter fuel gauge reading: ";
    cin >> fuelGaugeReading;

    // with braces
    cout << "First with braces:\n";
    if (fuelGaugeReading < 0.75){
        if (fuelGaugeReading < 0.25){
            cout << "Fuel very low. Caution\n";
        }
    } else {
        cout << "Fuel over 3/4. Don't stop now!\n";
    }

    // without braces
    cout << "Now without braces:\n";
    if (fuelGaugeReading < 0.75)
        if (fuelGaugeReading < 0.25)
            cout << "Fuel very low. Caution!\n";
    else
        // try 0.5 and this will pair it with the last if...
        cout << "Fuel over 3/4. Don't stop now!\n";

    return (0);
}