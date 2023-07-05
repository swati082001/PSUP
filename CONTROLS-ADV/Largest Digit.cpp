#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main(){
    int sum;
    int digits;

    cin >> sum >> digits;

    if(sum <= 9*digits && sum>0 && sum<=36 && digits>0 && digits<=4){
        string str="";
        for(int i=0;i<digits;i++){
            if(sum>=9){
                str+="9";
                sum = sum - 9;
            }
            else{
                str+= to_string(sum);
                sum = 0;

            }
        }
          cout << str << endl;
     
    }
    else{
        cout << "-1" ;
    }
    
    return 0;
}