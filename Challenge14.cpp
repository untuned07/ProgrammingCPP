// Maximum frequency of the character occured in the string

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string str = "werfdalhfclhsldflasdfclna";
    int arr[26]= {};
    for(int i=0; i<26; i++){
        arr[i] = 0;
    }
    for (int i = 0; i < str.size(); i++){
        arr[str[i]-'a']++;
    }

    char ans = 'a';
    int maxFreq= 0;
    
    for (int i=0; i<26; i++){
        if(arr[i] > maxFreq){
            maxFreq = arr[i];
            ans= i+'a';
        }
    }

    cout <<maxFreq <<" " <<ans <<endl;
    return 0;
}