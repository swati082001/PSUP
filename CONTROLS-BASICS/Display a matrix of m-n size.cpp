#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows;
    int cols;

    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols, 1));

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            matrix[i][k] = 1;
        }
    }

    // Print the matrix
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            cout << matrix[i][k] << " ";
        }
        cout << endl;
    }

    return 0;
}
