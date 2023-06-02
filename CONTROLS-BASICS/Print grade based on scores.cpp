 #include <iostream>

 using namespace std;

 int main(){
    int score;
    char grade;


  
   cin >> score;


     if (score >= 0 && score <= 39) {
        grade = 'F';
    } else if (score >= 40 && score <= 50) {
        grade = 'D';
    } else if (score >= 51 && score <= 60) {
        grade = 'C';
    } else if (score >= 61 && score <= 70) {
        grade = 'B';
    } else if (score >= 71 && score <= 80) {
        grade = 'A';
    } else if (score >= 81 && score <= 100) {
        grade = 'S';
    } else {
        cout << "Invalid input" << endl;
        return 0;
    }


    cout << grade << endl;


    return 0;


 }