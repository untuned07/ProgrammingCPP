/*
Pointers are variable that store the address of other variables.

We can perform basic arithmetic operations in pointers(increment or decrement or add or subtract)
*/

#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr;
    aptr = &a;              //Referencing
    cout<<&a <<endl;
    cout<<aptr <<endl;
    cout<<*aptr <<endl;     //Derefernecing

    *aptr=20;               //Changing value of 'a' using 'aptr pointer'
    cout <<a <<endl;
    aptr++;                 //increses by the size of int rather than one!
    cout<<aptr <<endl;
    return 0;
}