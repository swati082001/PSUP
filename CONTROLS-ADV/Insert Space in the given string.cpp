#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
	string output;
    for (int i = 0; i < str.length(); i++) {
        output += str[i];
        if (i < str.length() - 1 && isupper(str[i+1]) && islower(str[i])) {
            output += ' ';
        }
		
    }

    cout << output << endl;
    return 0;
}