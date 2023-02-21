// Palindrome array or Palindrome string.

#include <iostream>
using namespace std;

int main(){
    char array[100];
    cin>>array;
    int length = 0;
    while (array[length] != '\0'){
        length++;
    }
    bool flag = true;
    for(int i=0; i<(length / 2); i++){
        if(array[i] != array[length-1-i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout <<"Palindrome Character Array." <<endl;
    }else{
        cout<<"Not Palindrome Character Array. " <<endl;
    }
    return 0;
}