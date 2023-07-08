#include <bits/stdc++.h>

using namespace std;

string prefix(const vector<string>& x) {
    if (x.empty()) {
        return "";
    }

   string pre = x[0];

    for (size_t i = 1; i < x.size(); ++i) {
        while (pre != x[i].substr(0, pre.length())) {
            pre = pre.substr(0, pre.length() - 1);
            if (pre.empty()) {
                return "";
            }
        }
    }

    return pre;
}

int main() {
    int n;
   cin >> n;

    vector<string> w(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }

   cout << prefix(w) << endl;

    return 0;
}
