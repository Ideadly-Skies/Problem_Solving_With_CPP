#include <iostream>
using namespace std;

int main( ){
    // variable to store score 
    int score;

    // prompt user for score
    cout << "please input score: ";
    cin >> score;

    // control statement
    if (score > 100)
        cout << "High" << endl; 
    else
        cout << "Low" << endl;

    // return statement
    return (0);
}