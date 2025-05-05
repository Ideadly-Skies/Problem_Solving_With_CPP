/* imports */
#include <iostream>
using namespace std;

// main function
int main( ){
    /* variable to store savings and expenses */
    double savings, expenses; 

    /* control flow */
    if (savings >= expenses){
        cout << "Solvent" << endl;
        savings -= expenses;
        expenses = 0;
    } else {
        cout << "Bankrupt" << endl;
    }

    /* return statement */
    return (0);
}