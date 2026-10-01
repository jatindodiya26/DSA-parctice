#include<iostream>
using namespace std;

int main() {
    int r1, c1;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;
   

    int arr[r1][c1];

    
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> arr[i][j];
           }
    }
           int arr2[c1][r1];


    for (int i = 0; i < c1; ++i) {
        for (int j = 0; j < r1; ++j) {
          arr2[i][j]=arr[j][i] ;
           }
    }

    // cout<<endl;

for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout<< arr2[i][j]<<endl;
           }

}


return 0;
    }
