#include <iostream>
using namespace std;

int main( ){
    int firstChoice = 1;  
    switch (firstChoice + 1)
    {  
        case 1:
            cout << "Roast beef\n";  
            break;  
        case 2:
            cout << "Roast worms\n";  
            break;  
        case 3:
            cout << "Chocolate ice cream\n";  
        case 4:
            cout << "Onion ice cream\n";  
            break;  
        default:
            cout << "Bon appetit!\n";
    }

    // scope exercise
    int number = 22;
    {  
        int number = 42;
        cout << number << " ";
    }
    cout << number << endl;

    {
        int x = 1;
        cout << x << endl;
        {
            cout << x << endl;  
            int x = 2;
            cout << x << endl;
            {
                cout << x << endl;  
                int x = 3;
                cout << x << endl;
            }
            cout << x << endl;
        }
        cout << x << endl;
    }

    return (0);
}