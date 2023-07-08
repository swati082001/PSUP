#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int num;
	cin >> num;
	if(num <=0){
		cout << -1;
	}
	else{
	 int result = pow(2, num);
	 string res = to_string(result);
	
	int sum = 0;
	for(int i=0;i<res.length();i++){
	     int number = res[i] - '0';
		 sum+=number;
	}
	 cout << sum;
	}
	 
  
    return 0;
}