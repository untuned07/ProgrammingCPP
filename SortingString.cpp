#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
/*
str.begin() function returns the starting index of string
str.end() function returns the ending index of string
sort() function sorts and updates the value to the same string
*/
    string str = "forneus";
    sort(str.begin(), str.end());
    cout <<str <<endl;
    return 0;
}