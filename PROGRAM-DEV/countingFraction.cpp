#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


int countReducedForms(int a, int b) {
    int gcdValue = gcd(a, b);
    int count = 0;

    for (int i = 1; i <= gcdValue; i++) {
        if (gcdValue % i == 0) {
            int reducedA = a / i;
            int reducedB = b / i;

            
            if (reducedA < reducedB) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    int totalCount = countReducedForms(a, b);
    cout <<  totalCount-1 << endl;

    return 0;
}
