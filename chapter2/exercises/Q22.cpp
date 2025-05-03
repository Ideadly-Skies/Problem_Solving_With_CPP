#include <iostream>
using namespace std;
int main( ){
    // variable declaration
    double savings, expenses;

    // propmt the user for savings and expenses
    cout << "enter savings: $";
    cin >> savings;
    cout << "enter expenses: $";
    cin >> expenses;

    // check if savings >= expenses
    if (savings >= expenses){
        cout << "Solvent"; 
        savings -= expenses;
        expenses = 0;
    } else {
        cout << "Bankrupt";
    }

    // return statement
    return (0);
}