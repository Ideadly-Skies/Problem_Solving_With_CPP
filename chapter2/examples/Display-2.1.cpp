#include <iostream>
using namespace std;
int main(){
    // variables to store result
    int numberOfBars;
    double oneWeight, totalWeight;

    // first run
    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight in ounces of one candy bar.\n";
    cout << "Then press return.\n";
    cin >> numberOfBars;
    cin >> oneWeight;

    totalWeight = oneWeight * numberOfBars;

    cout << numberOfBars << " candy bars\n";
    cout << oneWeight << " ounces each\n";
    cout << "Total weight is " << totalWeight << " Ounces.\n";

    // second run
    cout << "\nTry another brand.\n";
    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight in ounces of one candy bar.\n";
    cout << "Then press return.\n";
    cin >> numberOfBars;
    cin >> oneWeight;

    totalWeight = oneWeight * numberOfBars;

    cout << numberOfBars << " candy bars\n";
    cout << oneWeight << " ounces each\n";
    cout << "Total weight is " << totalWeight << " Ounces.\n";
    
    cout << "\nperhaps an apple would be healthier.\n";

    return (0);
}