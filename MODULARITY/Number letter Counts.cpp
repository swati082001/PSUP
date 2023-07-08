#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	int sum = 0;
	cin >> n;
	
	string str = to_string(n);
	
	for(int i=0;i<str.length();i++){
		if(str[i]=='1' ||str[i]=='2' ||str[i]=='6' ){
			sum+=3;
		}
		else if(str[i]=='4' ||str[i]=='5' ||str[i]=='9' || str[i]=='0'){
			sum= sum+4;
		}
		else if(str[i]=='3' ||str[i]=='7' ||str[i]=='8'){
			sum+=5;
			
		}
	}
	cout << sum;
    return 0;
}