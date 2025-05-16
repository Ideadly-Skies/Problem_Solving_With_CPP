//Calorie-counting program
#include <iostream>
using namespace std;

int main( ){
    // variables to store result
    int numberOfItems, count,
        caloriesForItem, totalCalories;
    
    // items customer eat today 
    cout << "How many items did you eat today? ";
    cin >> numberOfItems;

    totalCalories = 0;
    count = 1;
    cout << "Enter the number of calories in each of the\n"
         << numberOfItems << " items eaten:\n";

    // loop until numberOfItems eaten today
    while (count++ <= numberOfItems){
        cin >> caloriesForItem;
        totalCalories += caloriesForItem;
    }

    // output total calories eaten today
    cout << "Total calories eaten today = "
         << totalCalories << endl;

    // return statement
    return (0);
}