#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1;
    string str2;
    string str3;
    cin >> str1 >> str2 ;
    cin >> str3;
    string concat = str1+str2;
    if(concat == str3){
        int count = 0;
        for(int i=0;i<concat.length();i++){
            if(concat[i]==str3[i]){
                count++;
            }
        }
        if(count == str3.length()){
            cout << "yes";
        }
        else{
            cout << "no";
        }
    }
    else{
        cout << "no" ;
    }
    return 0;
}