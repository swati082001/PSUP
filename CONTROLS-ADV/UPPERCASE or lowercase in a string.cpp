#include <bits/stdc++.h>
using namespace std;

string convertToUppercase(const string& sentence) {
    string result = sentence;
    for (char& c : result) {
        c = toupper(c);
    }
    return result;
}

string convertToLowercase(const string& sentence){
	string res = sentence;
	for(char& c : res){
		c = tolower(c);
	}
	return res;
}

int main() 
{
   string sentence;
	getline(cin,sentence);
	
	string uppercase = convertToUppercase(sentence);
	string lowercase = convertToLowercase(sentence);
	
	if(sentence == lowercase){
		cout << "L" << endl;
	}
	else if(sentence == uppercase){
		cout << "U" << endl;
	}
	else{
		cout << "Both" << endl;
	}
	
	
    return 0;
}