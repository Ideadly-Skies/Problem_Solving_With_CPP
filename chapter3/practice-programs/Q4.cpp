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
        // variable to contain horoscope 
        string horoscope = ""; 
        
        if ((month == 1 && (day >= 20 && day <= 31)) 
        || (month == 2 && (day >= 1 && day <= 18))){
            horoscope = "Aquarius"; 
        } else if ((month == 2 && (day >= 19 && day <= 29)) 
        || (month == 3 && (day >= 1 && day <= 20))){
            horoscope = "Pisces";
        } else if ((month == 3 && (day >= 21 && day <= 31))
        || (month == 4 && (day >= 1 && day <= 19))) {
            horoscope = "Aries";
        } else if ((month == 4 && (day >= 20 && day <= 30))
        || (month == 5 && (day >= 1 && day <= 20))) {
            horoscope = "Taurus";
        } else if ((month == 5 && (day >= 21 && day <= 31))
        || (month == 6 && (day >= 1 && day <= 21))) {
            horoscope = "Gemini";
        } else if ((month == 6 && (day >= 22 && day <= 30)) 
        || (month == 7 && (day >= 1 && day <= 22))) {
            horoscope = "Cancer";
        } else if ((month == 7 && (day >= 23 && day <= 31)) 
        || (month == 8 && (day >= 1 && day <= 22))) {
            horoscope = "Leo";
        } else if ((month == 8 && (day >= 23 && day <= 31))
        || (month == 9 && (day >= 1 && day <= 22))) {
            horoscope = "Virgo";
        } else if ((month == 9 && (day >= 23 && day <= 30))
        || (month == 10 && (day >= 1 && day <= 22))) {
            horoscope = "Libra";
        } else if ((month == 10 && (day >= 23 && day <= 31)) 
        || (month == 11 && (day >= 1 && day <= 21))) {
            horoscope = "Scorpio";
        } else if ((month == 11 && (day >= 22 && day <= 30))
        || (month == 12 && (day >= 1 && day <= 21))) {
            horoscope = "Sagittarius";
        } else if ((month == 12 && (day >= 22 && day <= 31))
        || (month == 1 && (day >= 1 && day <= 19))) {
            horoscope = "Capricorn";
        }

        // output horoscope sign 
        cout << "\nYour horoscope sign is: " << horoscope;

        // configure compatible signs
        // FIRE element
        if (horoscope == "Aries"){
            cout << ", most comfortable with both Leo and Sagittarius." << endl;
        } else if (horoscope == "Leo"){
            cout << ", most comfortable with both Aries and Sagittarius." << endl;
        } else if (horoscope == "Sagittarius"){
            cout << ", most comfortable with both Aries and Leo" << endl;
        }

        // EARTH element
        if (horoscope == "Taurus"){
            cout << ", most comfortable with both Virgo and Capricorn." << endl;
        } else if (horoscope == "Virgo"){
            cout << ", most comfortable with both Taurus and Capricorn." << endl;
        } else if (horoscope == "Capricorn"){
            cout << ", most comfortable with both Taurus and Virgo." << endl;
        }

        // AIR element
        if (horoscope == "Gemini"){
            cout << ", most comfortable with both Libra and Aquarius." << endl;
        } else if (horoscope == "Libra"){
            cout << ", most comfortable with both Gemini and Aquarius." << endl;
        } else if (horoscope == "Aquarius"){
            cout << ", most comfortable with both Gemini and Libra." << endl;
        }

        // WATER element
        if (horoscope == "Cancer"){
            cout << ", most comfortable with both Scorpio and Pisces." << endl;
        } else if (horoscope == "Scorpio"){
            cout << ", most comfortable with both Cancer and Pisces." << endl;
        } else if (horoscope == "Pisces"){
            cout << ", most comfortable with both Cancer and Scorpio." << endl;
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