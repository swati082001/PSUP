#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
     for(int i=0;i<str.size();i++){
		 if(str[i]=='!' || str[i]=='@'|| str[i]=='#' || str[i]=='$'|| str[i]=='%' || str[i]=='&'||str[i]=='*'){
			 continue;
		 }
		 else{
			 cout << str[i];
		 }
		 
	 }
    return 0;
}