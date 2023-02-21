// 2D Matrix search: Sumsung placement Question
/*

Given a n x m matrix: 
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Test case matrix:
1  4  7  11
2  5  8  12
3  6  9  16
10 13 14 17


*/

#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >>m >>n;
    int val;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >>arr[i][j];
        }
    }
    cout<<"Enter the value to find: " <<endl;
    cin>>val;
    bool flag = false;
/*    
// Coded by me first with brute force approach.
// With time complexity: O(nm)
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            if(arr[i][j] == val){
                flag = true;
                break;
            }
        }
    }
    */
    // Brainstormed approach:
    int row = 0, col = n-1;
    while (row <m && col >=0){
        if(arr[row][col] == val){
            flag = true;
            break;
        }
        else if(arr[row][col] > val){
            col--;
        }else{
            row++;
        }
    }
     
    if(flag == true){
        cout<<"Element is present." <<endl;
    }else{
        cout <<"Element is not present." <<endl;
    }
    return 0;
}