#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={3,5,7,9};
    int length = sizeof(arr1)/sizeof(arr1[0]);
    // Using Poor time Complexity: O(n^2)
    for(int i=0; i<length; i++){
        for(int j=0; j<length; j++){
            if(arr1[i] == arr2[j]){
                cout <<arr1[i] <<" ";
            }
        }
    }
    return 0;
}