//GFG problem: https://practice.geeksforgeeks.org/batch/fork-cpp/track/module-1-basics-and-control-structures/problem/logical-operators

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void logicOp(int a, int b);


// } Driver Code Ends
//User function Template for C++


void logicOp(int a, int b)
{
    /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/ 
    cout <<(a&&b) <<" " <<(a||b) <<" " <<((!a)&&(!b)) <<endl;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    logicOp(a,b);
	    
	}
	return 0;
}
// } Driver Code Ends