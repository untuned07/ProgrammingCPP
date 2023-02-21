#include <iostream>
using namespace std;
// Get Bit
int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

// Set Bit
// set means: 1 and unset means: 0
int setBit(int n, int pos){
    return (n | (1<<pos));
}

// Clear Bit
// Usually means the turn the bit of the position into 0
int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}

// Upadate Bit
int updateBit(int n, int pos, int val){
    int mask = ~(1<<pos);
    n = n & mask;
    return n | (val<<pos);
}

int main(){

    // cout <<getBit(5, 2) <<endl;
    // cout <<setBit(5, 1) <<endl;
    // cout <<clearBit(5, 2) <<endl;
    cout <<updateBit(5, 1, 1) <<endl;
    return 0;
}