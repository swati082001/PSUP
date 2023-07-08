#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
	string str2;
	cin >> str >> str2;
	
	for(int i=0;i<str.length();i++){
		for(int j=0;j<str2.length();j++){
			if(str[i]==str2[j]){
				str2.erase(j,1);
			}
		}
	}
	if(str2.length()==0){
		cout << 1;
	}
	else{
		cout << 0;
	}
    return 0;
}