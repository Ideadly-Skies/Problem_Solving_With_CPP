#include <iostream>
using namespace std;

int main( ){
    // variables to store birthday
    int day, month, year;

    // prompt user for input
    cout << "welcome to the horoscope program generator!" << endl;
    cout << "\nplease type in your birthday below:" << endl;
    cout << "day: ";
    cin >> day;
    cout << "month: ";
    cin >> month;
    
    // stopping condition
    int userInput;
    bool done = false;
    while (!done) {
        // output horoscope sign 
        cout << "\nYour horoscope sign is: ";

        if ((month == 1 && (day >= 20 && day <= 31)) 
        || (month == 2 && (day >= 1 && day <= 18))){
            cout << "Aquarius!" << endl; 
        } else if ((month == 2 && (day >= 19 && day <= 29)) 
        || (month == 3 && (day >= 1 && day <= 20))){
            cout << "Pisces!" << endl;
        } else if ((month == 3 && (day >= 21 && day <= 31))
        || (month == 4 && (day >= 1 && day <= 19))) {
            cout << "Aries!" << endl; 
        } else if ((month == 4 && (day >= 20 && day <= 30))
        || (month == 5 && (day >= 1 && day <= 20))) {
            cout << "Taurus!" << endl;
        } else if ((month == 5 && (day >= 21 && day <= 31))
        || (month == 6 && (day >= 1 && day <= 21))) {
            cout << "Gemini!" << endl;
        } else if ((month == 6 && (day >= 22 && day <= 30)) 
        || (month == 7 && (day >= 1 && day <= 22))) {
            cout << "Cancer!" << endl;
        } else if ((month == 7 && (day >= 23 && day <= 31)) 
        || (month == 8 && (day >= 1 && day <= 22))) {
            cout << "Leo!" << endl;
        } else if ((month == 8 && (day >= 23 && day <= 31))
        || (month == 9 && (day >= 1 && day <= 22))) {
            cout << "Virgo!" << endl;
        } else if ((month == 9 && (day >= 23 && day <= 30))
        || (month == 10 && (day >= 1 && day <= 22))) {
            cout << "Libra!" << endl;
        } else if ((month == 10 && (day >= 23 && day <= 31)) 
        || (month == 11 && (day >= 1 && day <= 21))) {
            cout << "Scorpio!" << endl;
        } else if ((month == 11 && (day >= 22 && day <= 30))
        || (month == 12 && (day >= 1 && day <= 21))) {
            cout << "Sagittarius!" << endl;
        } else if ((month == 12 && (day >= 22 && day <= 31))
        || (month == 1 && (day >= 1 && day <= 19))) {
            cout << "Capricorn!" << endl;
        }

        // ask user if they wish to stop
        cout << "\ntype in any number to continue or -1 to stop: ";
        cin >> userInput; 

        // the game is finished
        if (userInput == -1){
            done = true;
        } else {
            // reprompt user for input
            cout << "please re-enter your birthday below:" << endl;
            cout << "day: ";
            cin >> day;
            cout << "month: ";
            cin >> month;
        }
    }

    return (0);
}