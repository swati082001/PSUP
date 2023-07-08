#include <iostream>
#include <cmath>

using namespace std;
bool isPentagonal(long long x) {
    long double n = sqrt(24 * x + 1);
    return fmod(n, 6) == 5;
}

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;

    for (int i = 1 + k; i < n; ++i) {
        long double pi = (i * (3 * i - 1)) / 2;
        long double pik = ((i - k) * ((3 * (i - k)) - 1)) / 2;

        
        if (isPentagonal(pi - pik) || isPentagonal(pi + pik)) {
            ans += 1;
        }
    }

    
    std::cout << ans << std::endl;

    return 0;
}
