#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main( ){ 
    // define variables 
    double buoyant_force, weight_of_fluid = 62.4,
           volume, weight, radius, pi = M_PI;

    // propmt for weight and radius
    cout << "check to see if your sphere will float on water!" << endl;
    cout << "Input weight (in pounds) of sphere: ";
    cin >> weight;
    cout << "Input radius (in feet) of sphere: ";
    cin >> radius;

    // compute volume of water
    volume = (4/3) * pi * pow(radius, 3);
    buoyant_force = volume * weight_of_fluid;

    // check to see if sphere will float
    if (buoyant_force >= weight)
        cout << "The sphere will float." << endl;
    else
        cout << "The sphere will sink." << endl;

    return (0);
}