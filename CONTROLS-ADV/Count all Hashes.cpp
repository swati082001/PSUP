#include <iostream>
#include <string>


using namespace std;

int main(){
    string str;
    cin >> str;

    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i] == '#'){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}