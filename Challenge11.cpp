// Pair Sum Problem
// Check if there exists two elements in an array such that their sum is equal to given k

#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >>n;
    int arr[n];
    for(int i=0; i< n; i++){
        cin >>arr[i];
    }
    cin >>k;

    /*
    // Brute force approach
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == k){
                cout <<i <<" " <<j <<endl;
                break;
            }
        }
    }
    */

    // if array is sorted: then we can use an optimized approach!
    // if array is not sorted: then we first need to sort or use brute force approach.
    int low = 0;
    int high=n-1;
    while (low <high)
    {
        if(arr[low] + arr[high] == k){
            cout <<low <<" " <<high <<endl;
            break;
        }else if(arr[low]+arr[high] >k){
            high--;
        }else{
            low++;
        }
    }
    
    return 0;
}