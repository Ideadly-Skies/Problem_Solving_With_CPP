#include <iostream>
using namespace std;


int main( ){
    // variable declaration
    double one, two, three, four, five;
    
    // variable initialization
    one = 1.000; two = 1.414; three = 1.732; 
    four = 2.000; five = 2.236;
    
    // set precision for cout
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    // output the table legend
    cout << "N\t\t" << "Square Root" << endl;
    cout << 1 << "\t\t" << one << endl;
    cout << 2 << "\t\t" << two << endl;
    cout << 3 << "\t\t" << three << endl;
    cout << 4 << "\t\t" << four << endl;
    cout << 5 << "\t\t" << five << endl; 

    return (0);
}