#include <iostream>
using namespace std;

/* program invocation begins here */
int main(void){
    // enumeration type
    enum MonthLength {
        JAN_LENGTH = 31, FEB_LENGTH = 28,
        MAR_LENGTH = 31, APR_LENGTH = 30, MAY_LENGTH = 31,
        JUN_LENGTH = 30, JUL_LENGTH = 31, AUG_LENGTH = 31,
        SEP_LENGTH = 30, OCT_LENGTH = 31, NOV_LENGTH = 30,
        DEC_LENGTH = 31
    };

    // derive january month length
    cout << "January Month Length: " << MonthLength::JAN_LENGTH << "." << endl;

    // illegal to do direct integer comparison
    MonthLength length = MonthLength::FEB_LENGTH; // NOT INTEGERS
    if (length == MonthLength::FEB_LENGTH){
        cout << "this returns true";
    } else {
        cout << "this returns false";
    }

    // return statement
    return (0);
}