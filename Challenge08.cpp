/*
Given an array of size n. Display its all subarrays
*/

#include <iostream>
using namespace std;

int main(){
    int n=0;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for (int k = i; k <= j; k++){
                cout <<arr[k] <<" ";
            }
            cout <<endl;
        }
    }
    return 0;
}