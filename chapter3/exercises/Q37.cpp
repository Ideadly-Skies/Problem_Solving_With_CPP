#include <iostream>
using namespace std;

// prompt user to enter even number
int main( ){
    int num;
    cout << "Enter an even number. Input '-1' to end the loop prematurely: ";
    cin >> num;

    int sum = 0; // store total sum of all even numbers
    int count = 0; // store total even numbers inputted

    while (num != -1){
        // reinput num until correct
        while (num % 2 != 0){
            cout << "You have inputted an invalid number! Input an even number: ";
            cin >> num;
        }

        // add even number to running total
        sum = sum + num;
        count++;

        // reprompt the user for even number
        cout << "Enter an even number. Input '-1' to end the loop prematurely: ";
        cin >> num;
    }

    // output total sum for all even numbers
    cout << "total sum for " << count << " even numbers: "
         << sum << endl;

    return (0);
}