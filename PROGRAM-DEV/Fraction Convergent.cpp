#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a;
	int b;
	cin >> a >> b;
	int temp = 0;
	int small = 0;
	if(a < b){
		small = a;
	}
	else{
		small = b;
	}
	for(int i=1;i<=small;i++){
		if(a%i==0 && b%i==0){
			 temp = i;
		}
	}
	cout << a/temp << " " << b/temp << endl;	
    return 0;
}