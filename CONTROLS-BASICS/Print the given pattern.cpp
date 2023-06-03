#include <iostream>
#include <string>

using namespace std;

int main(){
    int n ;
    cin >> n ;

    string str ="";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            str = str + "*" + " ";
        }
        str = str + "\n";
    }

    cout << str ;
    return 0;
}