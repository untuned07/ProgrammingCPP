// Subarray: Continuous part of the array.
// Number of subarrays of an array with n elements = nC2 + n = n*(n+1)/2
// Subsequence: A subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remaining elements.
// Number of subsequences of an array with n elements = 2^n
// Every subarray is a subsequence but every subsequence is not a subarray


// Que: Given an array of size n. Output sum of each subarray of the given array


#include <iostream>
using namespace std;

int main(){
    int n, sum;
    cin >>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >>arr[i];
    }

    /*
    // // Long Method which I applied first.

    // for(int i=0; i< n; i++){
    //     sum = arr[i];
    //     cout <<sum <<" ";
    //     for(int j=i+1; j <n; j++){
    //         sum = sum + arr[j];
    //         cout <<sum <<" ";
    //     }
    // }
    
    */

    
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout <<sum <<" ";
        }
    }
    
    return 0;
}