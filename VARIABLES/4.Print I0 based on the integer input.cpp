#include <iostream>
using namespace std;

int main() 
{
    int num; // Declare a variable num to store the input number
    cin >> num; // Read the input value for num from the user

    if(num <= 100){ // Check if num is less than or equal to 100
        cout << "0"; // If num is less than or equal to 100, print "0"
    }
    else{
        cout << "1"; // If num is greater than 100, print "1"
    }

    return 0; // Terminate the program
}
