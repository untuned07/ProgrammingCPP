// GFG Problem: https://practice.geeksforgeeks.org/batch/fork-cpp/track/module-1-basics-and-control-structures/problem/step-by-step-condition

//{ Driver Code Starts
//Initial Template for C++

// CPP code to check divisibility of number
#include <iostream>
using namespace std;

// Prorotype of function
void isDivisibleByPrime(int);


// } Driver Code Ends
//User function Template for C++

// Function to check divisibility
// N is the input integer
void isDivisibleByPrime(int n){
    
    // Your code here
    if(n %11 == 0){
        cout <<"Eleven" <<endl;
    }else if(n %3==0){
        cout <<"Three" <<endl;
    }else if(n %2 ==0){
        cout <<"Two" <<endl;
    }else{
        cout <<"-1" <<endl;
    }
    
}

//{ Driver Code Starts.

// Driver Code to test above function
int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        isDivisibleByPrime(n);
        
    }
    
	return 0;
}
// } Driver Code Ends