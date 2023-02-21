//GFG Problem: https://practice.geeksforgeeks.org/batch/fork-cpp/track/module-1-basics-and-control-structures/problem/while-loop-printtable

//{ Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void printTable(int n)
    {
        int multiplier=10;
        while(multiplier)
        {
           //Your code here
           cout<<n*multiplier <<" ";
           multiplier--;
        }
        
        cout<<endl;
    }  
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Solution obj;
	    obj.printTable(n);
	    
	}
	return 0;
}
// } Driver Code Ends