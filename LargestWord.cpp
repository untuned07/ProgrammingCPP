#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr, n);
    int i=0; 
    int current=0, max=0;
    int start = 0, end=0; 
    while (1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if (current >max){
                max= current;
                end=start;
            }
            current = 0;
            start = i+1;         
        }else{
            current++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<max <<endl;
    for(int i=0; i<max; i++){
        cout <<arr[i+end];
    }
    cout <<endl;
    return 0;
}