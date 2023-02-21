// First Repeating Element (Amazon, Oracle placement question)
/*
Problem: Given an array of size N. The task is to find the first repeating element in the array of integers, 
i.e., an element that occurs more than once and whose index of first occurence is smallest.

Constraints: 
1 <= N <= 10^6
0 <= Ai <= 10^6

Example: 
Input: 
7
1 5 3 4 3 5 6

Output:
2

Explanation: 
5 is appearing twice and its first appearance is at inex 2 which is less than 3 whose first occurring index is 3.

//Apna College: 8.5 Arrays - Q's asked by top MNC's

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >>arr[i];
    }

    const int N = 1e5 +2;
    int idx[N];
    for(int i= 0; i <N; i++){
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx, idx[arr[i]]);
        }else{
            idx[arr[i]] = i;
        }
    }
    if(minidx == INT_MAX){
        cout<<"-1" <<endl;
    }else{
        cout<<minidx +1 <<endl;
    }
    return 0;
}