#include <iostream>
using namespace std;

int main() 
{
   long long n;
	cin >> n ;
	int arr[n];
	
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}
	long long sum=0;
	
	for(int i=0;i<n;i++){
		sum = sum+arr[i];
	}
	cout << sum;
	
	
    return 0;
}