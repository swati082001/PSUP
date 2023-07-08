#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
	cin >> n;
	for(int i=1;i<=10;i++){
		int power = pow(i,n);
		string digit = to_string(power);
		if(digit.length()==n){
			cout << digit << endl;
		}
	}
    return 0;
}