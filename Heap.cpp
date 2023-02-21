#include <iostream>
using namespace std;

int main(){
    int a=10;               //Stored in Stack
    int *p = new int();     //Allocate memory in heap
    *p = 20;                //p would be stored in stack but will be pointing the memory address
    delete(p);              //deallocate memory from heap
                            //p becomes a dangling pointer i.e. have no value
    p=new int[4];           //created an array and p would point to an array
    delete[] p;             //delete the array
    p=NULL;                 //revoke the pointing position(memory location) from pointer
    return 0;
}