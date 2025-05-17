#include <iostream>
using namespace std;

int main( ){
    // var balance and interest 
    double accountBalance;
    double interest;

    // display welcome message
    cout << "welcome to our balance checker program!\n" << endl;

    // prompt accountBalance
    cout << "enter an account balance (-1 if you wish to stop)> $";
    cin >> accountBalance;

    // sentinel controlled loop
    while (accountBalance != -1){
        // calculate interest
        if (accountBalance >= 1000){
            interest = (0.015 * 1000) + (accountBalance - 1000) * 0.01;
        } else {
            interest = 0.015 * accountBalance; // first 1000
        }

        // variable to store totalDue and minPayment
        double totalDue = accountBalance + interest;
        double minPayment;

        // calculate minimum payment
        if (totalDue <= 10){
            minPayment = totalDue;
        } else {
            double tenPercent = 0.10 * totalDue;
            if (tenPercent > 10){
                minPayment = tenPercent; 
            } else {
                minPayment = 10;
            }
        }

        // output balance
        cout << "\nCurrent Balance: $" << accountBalance << endl;
        cout << "Interest: $" << interest << endl;
        cout << "__________________________ +" << endl;
        cout << "Total Amount Due: $" << (accountBalance + interest) << endl; 
        cout << "Minimum Payment: $" << minPayment << endl; 
        cout << "\n";

        // reprompt user
        cout << "enter an account balance (-1 if you wish to stop)> $";
        cin >> accountBalance;
    }

    // output goodbye message
    cout << "\nthank you for using our balance program, ";
    cout << "see you next time!" << endl;

    return (0);
}