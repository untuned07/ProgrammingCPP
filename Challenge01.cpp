// Time complexity: O(n)
// Que: Given an array of size n. For every i from 0 to n-1 output maximum element.


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, maximum = INT_MIN;
    cin >>n;
    int arr[n];
    for(int i=0; i <n; i++){
        cin >>arr[i];
    }

    for (int i=0; i<n; i++){
        maximum = max(maximum, arr[i]);
    }
    cout<<maximum;
    return 0;
}