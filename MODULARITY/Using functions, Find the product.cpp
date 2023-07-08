#include <bits/stdc++.h>
using namespace std;

int getproduct(int num1, int num2){
	int prdt = num1*num2;
	return prdt;
}

int main(){
    int num1;
	int num2;
	cin >> num1 >> num2;
	
	int prdt = getproduct(num1,num2);
	cout << prdt << endl;
    return 0;
}