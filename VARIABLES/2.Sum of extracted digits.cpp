#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  int num1; // Declare variable num1 to store the first input number
  int num2; // Declare variable num2 to store the second input number
  cin >> num1 >> num2; // Read input values for num1 and num2 from the user

  if(num1 < 10 || num2 < 10){ // Check if either num1 or num2 is less than 10
    cout << "Invalid number"; // If either number is less than 10, print "Invalid number"
  }
  else{
    int first_num = floor(num1/10); // Extract the tens digit from num1 and store it in first_num
    first_num = first_num % 10; // Take the remainder of first_num divided by 10 to get the desired tens digit

    int sec_num = floor(num2/10); // Extract the tens digit from num2 and store it in sec_num
    sec_num = sec_num % 10; // Take the remainder of sec_num divided by 10 to get the desired tens digit

    int sum = first_num + sec_num; // Add the tens digits together and store the result in sum
    cout << sum; // Print the sum of the tens digits
  }
  
  return 0; // Terminate the program
}
