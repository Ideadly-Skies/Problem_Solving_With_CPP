// Sums a list of ten negative numbers.
#include <iostream>
using namespace std;

int main( ){
    int number, sum = 0, count = 0;
    cout << "Enter 10 negative numbers.\n";

    while (++count <= 10){
        cin >> number;

        if (number >= 0){
            cout << "ERROR: positive numbers"
                 << " or zero was entered as the \n"
                 << count << "th number! Input ends "
                 << "with the " << count << "th number.\n"
                 << count << "th number was not added in.\n"; 
            break;
        }

        // increment sum by number
        sum = sum + number;
    }

    // output the sum of the first (count - 1) #s
    cout << sum << " is the sum of the first "
         << (count - 1) << " numbers.\n";

    return (0);
}