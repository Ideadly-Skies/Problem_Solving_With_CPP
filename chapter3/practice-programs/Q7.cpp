#include <iostream>
#include <iomanip>
using namespace std;

int main( ){
    // define rates for taxicab company 
    double hire_charge = 3.20, distance_charge = 2.05,
           per_minute_charge = 0.95, distance, fare;

    // start time and time taken
    int start_time, time_taken;

    // prompt user for input
    cout << "input trip start time: ";
    cin >> start_time;
    
    // surcharge for specific ranges
    double surcharge;
    if (0600 <= start_time <= 2300){
        surcharge = 0.15;
    }

    // propmt user for more input
    cout << "input the duration of journey (rounded to the nearest minutes): ";
    cin >> time_taken;
    cout << "input distance travelled (in km): ";
    cin >> distance;

    // calculate and output fare
    fare = hire_charge + (distance * distance_charge) 
           + per_minute_charge * time_taken;
    // apply surcharge
    fare = fare + (surcharge * fare); 
    
    // output total fare
    cout << fixed << setprecision(2);
    cout << "\ntotal fare for the trip: $" << fare << endl;    
    
    return (0);
}