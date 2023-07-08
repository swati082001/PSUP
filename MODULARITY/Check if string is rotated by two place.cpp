#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string one;
	string two;
	cin >> one >> two;
	string temp = one;
	int count = 2;
	while(count>0){
	 	char firstChar = one[0]; 
		one.erase(0,1);
		one+=firstChar;
		count--;
	}
	int backwards = 2;
	while(backwards>0){
	 	char lastChar = temp.back();
		temp.pop_back(); 
		temp = lastChar + temp;
		backwards--;
	}
	
	if(one==two || temp==two){
		cout << 1;
	}
	else{
		cout << 0;
	}
    return 0;
}