#include <bits/stdc++.h>

using namespace std;

void SummationOfPrimes(int n){
	vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

   int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            sum = sum+i;
        }
    }
    cout << sum;
}

int main(){
	int num;
	cin >> num;
	
	SummationOfPrimes(num);
	return 0;
}