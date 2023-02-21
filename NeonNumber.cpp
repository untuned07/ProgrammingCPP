// A neon number is a number where the sum of digits of square of the number is equal to the number.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int square, sum=0;
    square = n * n;
    int temp;
    while (square > 0){
        temp = square % 10;
        square /= 10;
        sum += temp;
    }
    if(sum == n){
        cout <<"Given number is Neon Number." <<endl;
    }else{
        cout <<"Given number is not Neon." <<endl;
    }
    return 0;
}