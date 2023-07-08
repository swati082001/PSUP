#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string str;
	cin >> str;
	
	int count=0;
	for(int i=0;i<str.length();i++){
		str[i] = tolower(str[i]);
		if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
			count++;
		}
		
	}
	cout << count;
    return 0;
}