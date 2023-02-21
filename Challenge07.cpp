// Smallest Positive Missing Number (Accolite, Amazon, Samsung, SnapDeal placement Question)
/*
Problem: You are given an array arr[] of N integers including 0. The task is to find the 
smallest positive number missing from the array.

Constraints: 
1 <= N <= 10^6
-10^6 <= Ai <= 10^6

//Apna College: 8.5 Arrays - Q's asked by top MNC's

*/

// Time complexity: O(n)
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i= 0; i<n; i++){
        cin >>arr[i];
    }

    bool check[n];
    for(int i=0; i<n;i++){
        check[i] = false;
    }

    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            check[arr[i]] = true;
        }
    }

    for(int i= 1; i < n; i++){
        if(check[i] == false){
            cout <<i <<endl;
            break;
        }
    }
    return 0;
}