#include <iostream>
#include <string>


using namespace std;

int main(){
    string str;
    int start;
    int end;
    cin >> str ;
    cin >> start >> end ;

    string res="";
    int count=0;
    for(int i=start;i<str.length();i++){
        if(count < end){
            res+= str[i];
            count++;
        }
        else if(count >= end){
            break;
        }
    }

    cout << res << endl;
    return 0;
}