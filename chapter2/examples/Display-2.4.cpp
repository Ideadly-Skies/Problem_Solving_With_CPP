#include <iostream>
using namespace std;
int main( ){
    char symbol1, symbol2, symbol3;

    cout << "Enter two initials, without any periods: ";
    cin >> symbol1 >> symbol2;
    cout << "The two initials are: ";
    cout << symbol1 << symbol2 << endl;
    cout << "once more with a space: ";
    symbol3 = ' '; 
    cout << symbol1 << symbol3 << symbol2 << endl;
    cout << "That's all.\n";
    
    return (0);
}