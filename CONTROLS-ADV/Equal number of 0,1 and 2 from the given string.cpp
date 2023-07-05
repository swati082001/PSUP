#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='0'){
            zero++;
        }
        else if(str[i]=='1'){
            one++;
        }
        else if(str[i]=='2'){
            two++;
        }
    }

    if(zero == one && one == two && two == zero){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}