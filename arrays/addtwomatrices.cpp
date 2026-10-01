#include<iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> r2 >> c2;

    if (r1 != r2 || c1 != c2) {
        cout << "Matrices cannot be added. The number of rows and columns must be the same." << endl;
        return 1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], sum[r1][c1];

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> matrix1[i][j];
           }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> matrix2[i][j];
        }
    }

    // Add matrices
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum matrix
    cout << "Sum of the matrices is:\n";
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}