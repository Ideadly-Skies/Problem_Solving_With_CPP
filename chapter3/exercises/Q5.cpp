#include <iostream>
using namespace std;

int main( ){
    // main body
    int x = 2;
    cout << "Start\n";  
    if (x <= 3)  
        if (x != 0)
                cout << "Hello from the second if.\n";  
        else  
                cout << "Hello from the else.\n";
    cout << "End\n";
    
    // start again form
    cout << "Start again\n";  
    if (x > 3)  
        if (x != 0)
                cout << "Hello from the second if.\n";  
        else  
                cout << "Hello from the else.\n";
    cout << "End again\n"; 

    // return statement
    return (0);
}