#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string str;
	cin >> str;
	string words="";
	string hashes="";
	for(int i=0;i<str.length();i++){
		if(str[i]=='#'){
			hashes = hashes+str[i];
		}
		else{
			words+=str[i];
		}
	}
	string concat = words+hashes;
	cout << concat;
    return 0;
}