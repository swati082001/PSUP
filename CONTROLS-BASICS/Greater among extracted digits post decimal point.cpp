#include <iostream>
#include <string>

using namespace std;

int main(){
    double num1, num2;
    cin >> num1 >> num2; // Read input values for num1 and num2 from the user

    string str = to_string(num1); // Convert num1 to a string and store it in str
    string str2 = to_string(num2); // Convert num2 to a string and store it in str2

    int ind1, ind2; // Declare variables to store the index of the decimal point in str and str2

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '.'){
            ind1 = i; // Find the index of the decimal point in str and store it in ind1
        }
    }

    for(int i = 0; i < str2.length(); i++){
        if(str2[i] == '.'){
            ind2 = i; // Find the index of the decimal point in str2 and store it in ind2
        }
    }

    if(str[ind1 + 1] > str2[ind2 + 1]){
        cout << str[ind1 + 1]; // If the digit after the decimal point in str is greater than the digit in str2, print the digit from str
    }
    else if(str[ind1 + 1] < str2[ind2 + 1]) {
        cout << str2[ind2 + 1]; // If the digit after the decimal point in str2 is greater than the digit in str, print the digit from str2
    }
    else{
        cout << "Both values are the same"; // If the digits after the decimal point in both str and str2 are the same, print the message "Both values are the same"
    }
    return 0; // Terminate the program
}
