#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


void printReducedForms(int a, int b) {
    int gcdValue = gcd(a, b);

    
    if (gcdValue == 1) {
       cout << "-1" << endl;
        return;
    }

    for (int i = 2; i <= gcdValue; i++) {
        if (gcdValue % i == 0) {
            int reducedA = a / i;
            int reducedB = b / i;

            
            if (reducedA < reducedB) {
                cout << reducedA << "/" << reducedB << " ";
            }
        }
    }

  
}

int main() {
    int a, b;
    cin >> a >> b;

    printReducedForms(a, b);

    return 0;
}
