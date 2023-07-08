#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string str;
	cin >> str;
	
	int length = str.length();
	int sum = 0;
	for(int i=0;i<length;i++){
		int digit = stoi(string(1, str[i]));
        int power = pow(digit, length);
		sum = sum+power;
	}
	
	if(sum==stoi(str)){
		cout << "Armstrong number";
	}
	else{
		cout << "Not an armstrong number";
	}
	
	
    return 0;
}