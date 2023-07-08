#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	bool flag = false;
	for(int i=1;i<=(n/2);i++){
		for(int j=1;j<=(n/3);j++){
			int c = n-(i+j);
			if(c<(i+j) ){
				int sqOfC = c*c;
				int sqOfI = i*i;
				int sqOfJ = j*j;
				if(sqOfC == (sqOfI + sqOfJ)){
					flag = true;
					break;
				}
			}
		}
	}
	if(flag == false){
		cout << "No";
	}
	else{
		cout << "Yes";
	}

    return 0;
}