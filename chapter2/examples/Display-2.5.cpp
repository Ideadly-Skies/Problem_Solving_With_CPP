#include <iostream>
#include <string>
using namespace std;
int main( ){
    // variable declaration
    string middleName, petName;
    string alterEgoName;
    
    // output and input stream
    cout << "Enter your middle name and the name of your pet.\n";
    cin >> middleName;
    cin >> petName;

    // form alterEgoName
    alterEgoName = petName + " " + middleName;
    
    cout << "The name of your alter ego is ";
    cout << alterEgoName << "!" << endl;

    return (0);
}