#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a=2, b=4;
    cout<<"Before swap: " <<a <<" " <<b <<endl;
    swap(&a, &b);
    cout <<"After swap: " <<a <<" " <<b <<endl;
    return 0;
}