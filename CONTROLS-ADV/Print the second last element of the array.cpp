#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << arr[n-2] << endl;

    return 0;
}