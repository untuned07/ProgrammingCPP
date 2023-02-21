// Requirement: Sorted array! It is mandaratory
// Time complexity: O(log n)

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int val){
    int s=0, e=n;
    while (s<=e){
        int mid = (s + e)/2;
        if (arr[mid] == val){
            return mid;
        }
        else if(arr[mid] > val){
            e= mid -1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n, val;
    cin >>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >>arr[i];
    }
    cout<<"Enter the element to find: ";
    cin >>val;

    cout<<binarySearch(arr,n,val);

    return 0;
}