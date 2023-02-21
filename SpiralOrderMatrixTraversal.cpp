#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin>>m >>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int rowStart = 0, rowEnd = m-1, columnStart = 0, columnEnd = n-1;

    while(rowStart <=rowEnd && columnStart <= columnEnd){
        for(int col=columnStart; col <=columnEnd; col++){
            cout <<arr[rowStart][col] <<" ";
        }
        rowStart++;
        for(int row = rowStart; row<=rowEnd; row++){
            cout<<arr[row][columnEnd] <<" ";
        }
        columnEnd--;
        for(int col= columnEnd; col>=columnStart; col--){
            cout<<arr[rowEnd][col] <<" ";
        }
        rowEnd--;
        for(int row=rowEnd; row >= rowStart; row--){
            cout<<arr[row][columnStart] <<" ";
        }
        columnStart++;
    }
    return 0;
}