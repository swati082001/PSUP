#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;  //input taking

    if(n<0 || n>100){
        cout << -1;
    }

    for(int i=1;i<=n;i++){
         if(i%3==0 && i%5==0){
             cout << "FizzBuzz" << " "; //if the number is divisible by both 3 and 5 , the print fizzBuzz
        }
        else if(i%3 == 0){                // if the number is divisible by 3
            cout << "Fizz" << " " ; // print Fizz
        }
        else if(i%5==0){            // if the number is divisible by 5 then print Buzz else move to the next condition
             cout << "Buzz" << " ";
        }
        else{
             cout << i << " ";  //if no conditions gets passed the print -1
        }

    }
    return 0;
}

