/* variable main program invocation */
#include <iostream>
using namespace std;
int main( ){
    // variable declaration 
    int exam, programs_done;

    // prompt user for exam and programs_done
    cout << "enter exam grade: ";
    cin >> exam;
    cout << "enter programs done: ";
    cin >> programs_done;

    // pass the exam
    if (exam >= 60 && programs_done >= 10)
        cout << "Passed";
    else
        cout << "Failed";
    
    // return statement
    return (0);
}