#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            cout << arr[i] << " ";
        }
    }

    return 0;
}