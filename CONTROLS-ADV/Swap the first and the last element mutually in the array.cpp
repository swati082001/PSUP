#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int end = arr[n - 1];
    int first = arr[0];
    arr[n - 1] = first;
    arr[0] = end;

    string str = "";
    for (int i = 0; i < n; i++) {
        str += to_string(arr[i]) + " ";
       
    }
    cout << str << endl;

    return 0;
}
