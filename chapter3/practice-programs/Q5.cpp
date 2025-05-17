// finds and prints all prime numbers between 3 and 100
#include <iostream>
#include <cmath>
using namespace std;

int main( ){
    // output program info
    cout << "prime numbers between 3 and 100: "; 

    // flag bool var
    bool isPrime; 
    for (int num = 3; num <= 100; num++){
        isPrime = true; // default bool
        for (int curr = 2; curr <= sqrt(num); curr++){
            // if divisible, not prime
            if (num % curr == 0){
                isPrime = false;   
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    // default newline
    cout << "\n";

    return (0);
}