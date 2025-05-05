// program to compute state income tax.
#include <iostream>
using namespace std;

// This program outputs the number of state income tax due computed
// as follows: no tax on income up to $15000; 5% on income between
// $15001 and $25000, 10% on income over $25000
int main( ){
    // variable declaration 
    int netIncome;
    double taxBill;
    double fivePercentTax, tenPercentTax;

    // input net income
    cout << "Enter net income (rounded to whole dollars) $";
    cin >> netIncome;

    if (netIncome <= 15000){
        taxBill = 0;
    } else if (netIncome <= 25000){
        // 5% of amount over $15000
        taxBill = (0.05 * (netIncome - 15000));        
    } else {
        // fivePercentTax = 5% of income from $15000 to $25000
        fivePercentTax = 0.05 * 10000;

        // tenPercentTax = 10% of income over $25000 
        tenPercentTax = (0.10 * (netIncome - 25000));

        // calculate taxBill
        taxBill = fivePercentTax + tenPercentTax;
    }

    // output net income and tax bill
    cout.setf(ios::fixed);        
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Net income = $" << netIncome << endl
         << "Tax Bill = $" << taxBill << endl;
    
    // return statement
    return (0);
}