#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
	cin >> k;
	int n  = 10000;
	vector<bool> isPrime(n + 1, true);
	for(int i=2; i<= sqrt(n);i++){
		if(isPrime[i]){
			for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
		}
	}
	int count=0;
	
	 for (int i = 2; i <= n; i++) {
		 if(count==k){
			 cout << i-1;
			 break;
		 }
         if (isPrime[i]) {
            count++;
        }
    }
	
    return 0;
}