//Determines the total number of green-necked vulture eggs
//Counted by all conservationists in the conservation district.
#include <iostream>
using namespace std;

int main( ){
    cout << "This program tallies conservationist reports\n"
         << "on the green-necked vulture.\n"

         << "Each conservationist's report consist of\n"
         << "a list of numbers. Each number is the count of\n"
         << "the eggs observed in one"
         << "green-necked vulture nest.\n"
         << "This program then tallies " 
         << "the total number of eggs.\n";

    int numberOfReports;
    cout << "How many conservationist reports are there? ";
    cin >> numberOfReports;

    int grandTotal = 0, subtotal, count;
    for (count = 1; count <= numberOfReports; count++){
        cout << endl << "Enter the report of "
             << "conservationist number " << count << endl;
        cout << "Enter the number of eggs in each nest.\n"
             << "Place a negative integer at the end of your list.\n";
        subtotal = 0;
        int next;
        cin >> next;
        
        while (next >= 0){
            subtotal = subtotal + next;
            cin >> next;
        }

        cout << "Total egg count for conservationist "
             << " number " << count << " is "
             << subtotal << endl;
        
        grandTotal = grandTotal + subtotal;
    }

    cout << endl << "Total egg count for all reports = "
         << grandTotal << endl;

    return (0);
}