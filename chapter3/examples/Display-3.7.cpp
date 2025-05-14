// program to give homework assignment information
#include <iostream>
using namespace std;

int main( ){
    int choice;

    do {
        cout
             << "Choose 1 to see the next homework assignment.\n"
             << "Choose 2 for your grade on the last assignment.\n"
             << "Choose 3 for assignments hints.\n"
             << "Choose 4 to exit this program.\n"
             << "Enter your choice and press return: ";
        cin >> choice;

        switch (choice){
            case 1:
                // code to display the next assignment on screen would go here
                break;
            case 2:
                // code to ask for a student number and give the corresponding
                // grade would go here
                break;
            case 3:
                // code to display a hint for the current assignment would go here
                break;
            case 4:
                // end of program
                cout << "End of Program.\n";
                break;
            default:
                // not a valid choice, please choose again
                cout << "Not a valid choice.\n"
                     << "Choose again.\n";
        }
        
        // display newline after every input 
        cout << endl;

    } while (choice != 4);

    return (0);
}