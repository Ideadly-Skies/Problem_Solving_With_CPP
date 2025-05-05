// imports
#include <iostream>
using namespace std;

/* main program invocation */
int main( ){
    // variable declaration
    int number = 69, guess;

    // prompt user for number
    cout << "please enter a number: ";
    cin >> guess;

    // multiway guessing game
    if (guess < number) {
        cout << "The number " << guess << " is too low!\n";
    } else if (guess > number){
        cout << "The number " << guess << " is too high!\n";
    } else {
        cout << "You have guessed the number correctly, " << number << "!";
    }

    // return statement
    return (0);
}