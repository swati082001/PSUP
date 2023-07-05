#include <iostream>
using namespace std;

void eliminateSubstring(string& str) {
    int n = str.length();
    int curr = 0;  
    int next = 0;  

    while (next < n) {
        if (str[next] == 'b') {
            next++;
        } else if (str[next] == 'a' && next + 1 < n && str[next + 1] == 'c') {
            next += 2;
        } else {
            str[curr] = str[next];
            curr++;
            next++;
        }
    }

    str.resize(curr); 
}

int main() {
    string str;
    cin >> str;

    eliminateSubstring(str);

    cout << str << endl;

    return 0;
}
