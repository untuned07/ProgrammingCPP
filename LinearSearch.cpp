// Time complexity: O(n)

#include <iostream>
using namespace std;

int main(){
    int n, val;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout <<"Enter the value to search in the array: " <<endl;
    cin >>val;

    for(int i=0; i<n; i++){
        if(arr[i] == val){
            cout<<"Element found at " <<i <<" index" <<endl;
            return 0;
        }
    }
    cout<<"Element was not found in the array." <<endl;
    return 0;
}