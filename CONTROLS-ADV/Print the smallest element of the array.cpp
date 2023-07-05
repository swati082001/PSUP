#include <bits/stdc++.h>

using namespace std;

int main(){
    int size = 8;
    int arr[size];
    
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
	int min = arr[0];
    for(int i=1;i<size;i++){
        if(min > arr[i]){
            min  = arr[i];
        }
    }
    cout << min << endl;
    return 0;
}