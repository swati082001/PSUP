#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    int sum = 0;
    for (char c : str) {
		if(c==' '){
			continue;
		}
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    cout << sum << endl;
    return 0;
}
