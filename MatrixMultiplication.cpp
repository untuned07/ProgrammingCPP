/*
Problem: Given two 2-Dimensional arrays of sizes n1 x n2 and n2 x n3.
Your task is to multiply these matrices and output the multiplied matrix.

Constraints:
1 <= n1, n2, n3 <= 300

Input Matrices:
m1:                 m2:
2 4 1 2             1 2 3
8 4 3 6             4 5 6
1 7 9 5             7 8 9
                    4 5 6

Output Matrix:
33  42  51
69  90  111
112 134 156

Approach:
Make a nested loop of order 3. In the outer loop iterate over rows of first
matrix and in the inner loop iterate over columns of second matrix.
Multiply rows of first matrix with columns of second matrix in the 
innermost loop and update in the answer matrix.
*/


#include <iostream>
using namespace std;

int main(){
    int m, n, o;
    cin >>m >>n >>o;
    int arr1[m][n], arr2[n][o];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >>arr1[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<o; j++){
            cin >>arr2[i][j];
        }
    }
    int sol[m][o];

    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            sol[i][j] = 0;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            for(int k=0; k<n; k++){
                sol[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            cout <<sol[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}