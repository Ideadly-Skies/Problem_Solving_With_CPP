// the program starts here
#include <iostream>
using namespace std;

// cin is used for input and cout is used for output
int main(){
    // the variable declaration
    int numberOfPods, peasPerPod, totalPeas;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods: ";
    cin >> numberOfPods;
    cout << "Enter the number of peas in a pod: ";
    cin >> peasPerPod;
    totalPeas = numberOfPods * peasPerPod;     
    cout << "If you have: "; 
    cout << numberOfPods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all of the pods.\n";
    
    // the program ends here 
    return (0);
}