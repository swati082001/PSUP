#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    if ((n1 + n2) > (n3 + n4)) {
        // If the sum of n1 and n2 is greater than the sum of n3 and n4
        if (n1 > n2) {
            // Check if n1 is greater than n2
            cout << n1; // Print n1
        }
        else if (n1 < n2) {
            // Check if n1 is less than n2
            cout << n2; // Print n2
        }
    }
    else if ((n1 + n2) < (n3 + n4)) {
        // If the sum of n1 and n2 is less than the sum of n3 and n4
        if (n3 > n4) {
            // Check if n3 is greater than n4
            cout << n3; // Print n3
        }
        else if (n3 < n4) {
            // Check if n3 is less than n4
            cout << n4; // Print n4
        }
    }
    else {
        // If the sums of n1+n2 and n3+n4 are equal
        if (n1 == n3) {
            // Check if n1 is equal to n3
            cout << n1; // Print n1
        }
        else if (n1 == n4) {
            // Check if n1 is equal to n4
            cout << n1; // Print n1
        }
        else if (n2 == n3) {
            // Check if n2 is equal to n3
            cout << n2; // Print n2
        }
        else if (n2 == n4) {
            // Check if n2 is equal to n4
            cout << n2; // Print n2
        }
    }

    return 0;
}
