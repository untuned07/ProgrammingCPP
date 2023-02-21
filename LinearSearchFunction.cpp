// Time complexity: O(n)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int val){
    for (int i = 0; i <n; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, val;
    cin>>n;
    int arr[n];
    for (int i= 0; i < n; i++){
        cin >>arr[i];
    }
    cout<<"Enter the value to search in the array: " ;
    cin >>val;

    cout<<linearSearch(arr, n, val);

    return 0;
}