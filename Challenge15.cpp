// Program to check if a given number is power of 2
// using bit manipulation:
/*
n= 6 = (0110)base 2                             n = 8 = (1000)base 2
n-1 = 5 = (0101)base                            n-1 = 7 = (0111)base 2

(n & n-1) has same bits as n except the rightmost set bit
0110 & 0101 = 0100                              1000 & 0111 = 0000

n has only one set bit, and n-1 will have all set bits after that position

*/

#include <iostream>
using namespace std;

bool ispowerof2(int n){
    return (n && !(n & n-1));
}

int main(){
    cout <<ispowerof2(16);
    return 0;
}