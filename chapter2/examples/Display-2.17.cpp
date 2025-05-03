//File Name: health.cpp (your system may require suffix other than cpp.)
//Author: Obie Ananda
//Email Address: Obie.kal22@gmail.com
//Assignment Number: 2
//Description: Program to determine if the user is ill
//Last Changed: 03 May 2025

#include <iostream>
using namespace std;
int main( ){
    // variable to store temperature
    const double NORMAL = 98.6; // degrees fahrenheit
    double temperature;  

    // prompt user for temperature
    cout << "Enter your temperature: ";
    cin >> temperature;

    // check if temp > normal
    if (temperature > NORMAL){
        cout << "You have a fever.\n";
        cout << "Drink lots of liquids and get to bed.\n";
    } else {
        cout << "You don't have fever.\n";
        cout << "Go study.\n";
    }

    // return statement
    return (0);
}