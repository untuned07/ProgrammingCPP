#include <iostream>
using namespace std;

int main(){
    int arr[]={10, 20, 30};
    cout <<*arr <<endl;         //Points to 0th element of array arr

    int *ptr = arr;
    for(int i=0; i<3; i++){
        cout <<*ptr <<" ";
        ptr++;
    }
    cout <<endl;
    for(int i=0; i<3; i++){     //arr can not be incremented or decremented directly
        cout<<*(arr+i) <<" ";   //arr here is indexing pointer that's why we can manipulate it by value of i
    }                           //and thus it does not require to add size of int in it.
    cout <<endl;
    return 0;
}