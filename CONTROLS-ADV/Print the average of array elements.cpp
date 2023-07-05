
#include <bits/stdc++.h>

using namespace std;

int main(){
    int size = 5;
    int arr[size];
	double sum = 0;
    for(int i=0;i<size;i++){
        cin >> arr[i];
		sum = sum+arr[i];
    }
    double average = ((sum)/size);
	cout << fixed << setprecision(1) << average << endl;
    return 0;
}