// Searching in Two Dimensional Array

#include <iostream>
using namespace std;

int main(){
    int m, n, val;
    cin >>m >>n;
    bool sign = false;
    int arr[m][n];
    cout<<"Enter the array elements: " <<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >>arr[i][j];
        }
    }

    cout<<"Enter the element to find: ";
    cin >>val;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]== val){
                sign = true;
            }
        }
    }
    if(sign == true){
        cout<<"Element found!" <<endl;
    }else{
        cout<<"Element not found!" <<endl;
    }
    return 0;
}