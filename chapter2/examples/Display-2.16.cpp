/* program invocation begins here */
#include <iostream>
using namespace std;
int main( ){
    double balance = 50.00;
    int count = 0;
    cout << "This program tells you how long it takes\n"
         << "to accummulate a debt of $100, starting with\n"
         << "an initial balance of $50 owed.\n"
         << "The interest rate is 2% per month.\n";

    while (balance < 100.00){
        balance = balance * 1.02;
        count++;
    }

    cout << "After " << count << " months,\n";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "your balance due will be $" << balance << endl;
    return (0);
}