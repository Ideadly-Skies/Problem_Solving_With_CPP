#include <iostream>
using namespace std;
int main( ){
    // variable declaration 
    int x;

    // prompt user for x input
    cout << "please input value for x: ";
    cin >> x; 

    // control flow
    if (x < 0){
        x = 7;
        cout << "x is now positive.";
    } else {
        x = -7;
        cout << "x is now negative.";
    }
    
    return (0);
}