/*
Character arrays are array of characters.
Declaration: char arr[n+1]

!ends with '/0' which is null character that describes the end of array. 
*/

#include <iostream>
using namespace std;

int main(){
    // Displays the array.
    char arr[10] = "Forneus";
    int i=0;
    while (arr[i] != '\0'){
        cout <<arr[i] <<" " ;
        i++;
    }
    cout <<endl;

    // Input and Output in Character Array.
    char array[100];
    cout<<"Enter the character array: " ;
    cin >>array;
    cout<<array <<endl;

    // Accessing particular element.

    cout<<array[0] <<endl;
    return 0;
}