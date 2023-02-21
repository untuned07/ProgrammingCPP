/*
Maximum Subarray Sum
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxSum = 0;

    /*
    // Brute Force Approach
    // Time complexity O(n^3)
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int sum = 0;
            for (int k = i; k <= j; k++){
                sum += arr[k];
            }
            if (sum > maxSum){
                maxSum = sum;
            }
        }
    }
    */

   /*
    // Optimised Approach
    // Time Complesxity O(n^2)
    // Cumulative Sum Approach
    int currsum[n+1];
    currsum[0] = 0;
    for(int i=1; i<=n; i++){
        currsum[i] = currsum[i-1] + arr[i-1];
    }
    for (int i = 1; i <= n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = currsum[i] - currsum[j];
            maxSum = max(sum, maxSum);
        }
    }
    */

    /*
    // Kadane's Algorithm
    // Time Complexity O(n)
    int currSum=0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum <0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    */
   
    cout << maxSum << endl;
    return 0;
}