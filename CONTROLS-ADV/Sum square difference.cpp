#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n ;
    int sum = 0;
    int numsum = 0;
    for(int i=1;i<=n;i++){
        int square = i*i;
        numsum = numsum + i;
        sum = sum+square;

    }
       int squareOfNaturalNum = numsum * numsum;
       int diff = squareOfNaturalNum - sum;
        //cout << squareOfNaturalNum << "   numsum" << endl;
        cout << diff;
        
    return 0;
}