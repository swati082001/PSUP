#include <iostream>
#include <limits>

using namespace std;

int main(){


     int number;
    int smallest = INT8_MAX;  
    int largest = INT8_MIN;   

    while (true) {
        cin >> number;

        
        if (number < smallest) {
            smallest = number;
        }
        if (number > largest) {
            largest = number;
        }

        if (number == 1) {
            break;
        }
    }

    cout  << largest << " ";
    cout  << smallest << " ";

    return 0;
   
   
}