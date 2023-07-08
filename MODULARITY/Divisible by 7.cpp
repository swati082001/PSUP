#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string str;
	cin >> str;
	long num = stol(str);
	 if(num%7==0){
		 cout << 1;
	 }
	else{
		cout << 0;
	}
	return 0;
	
}