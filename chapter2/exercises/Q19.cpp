#include <iostream>
using namespace std;

/* fix: cast 9 or 5 to double */
int main(void){
    double c = 20;
    double f;

    /* 9 and 5 are both integers here and the / op will return int */
    f = (9 / 5) * c + 32.0;

    /* the final value assigned would be 1 * 20 + 32.0 = 52 */
    cout << "value assigned to f: " << f << " deg Fahrenheit" << endl;

    return (0);
}