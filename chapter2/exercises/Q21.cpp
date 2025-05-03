#include <iostream>
using namespace std;
int main( ){
    // variable declaration
    int score;

    // prompt user to input score
    cout << "please input score: ";
    cin >> score;

    // if-else condition
    if (score > 100)
        cout << "High";
    else
        cout << "Low"; 

    // return statement
    return (0);
}