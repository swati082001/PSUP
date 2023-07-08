#include <bits/stdc++.h>

using namespace std;

bool isPandigital(int number) {
    string digits = to_string(number);
    unordered_set<char> uniqueDigits(digits.begin(), digits.end());
    int n = digits.length();
    return (uniqueDigits.size() == n && uniqueDigits.find('0') == uniqueDigits.end() && *max_element(digits.begin(), digits.end()) - '0' == n);
}

int main() {
    int number;
    cin >> number;

    if (isPandigital(number)) {
       cout << "Yes" <<endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
