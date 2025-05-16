//Illustrates a for loop.
#include <iostream>
using namespace std;

int main( ){
    int sum = 0;

    for (int n = 1; n <= 10; n++){ // note that the variable n is a local
        sum = sum + n;             // variable of the body of the for loop
    }

    cout << "The sum of the numbers 1 to 10 is "
         << sum << endl;

    int n;  
    for (n = 1; n <= 10; n = n + 2)
        cout << "n is now equal to " << n << endl;

    for (n = 0; n > -100; n = n - 7)
        cout << "n is now equal to " << n << endl;
    
    for (double size = 0.75; size <= 5; size = size + 0.05)
        cout << "size is now equal to " << size << endl;

    return (0);
}