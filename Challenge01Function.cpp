// Time complexity: O(n)

#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int maxElement(int arr[], int maximum, int n){
    for(int i=0; i<n;i++){
        maximum=max(maximum, arr[i]);
    }
    return maximum;
}

int main(){
    int n;
    int maxnum= INT_MIN;
    cin >>n;
    int arr[n];
    for(int i=0; i <n; i++){
        cin >>arr[i];
    }
    maxnum = maxElement(arr, maxnum, n);
    cout<<maxnum <<endl;
    return 0;
}