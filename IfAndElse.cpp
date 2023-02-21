//GFG link: https://practice.geeksforgeeks.org/batch/fork-cpp/track/module-1-basics-and-control-structures/article/ODAz
//If and else condition together work simultaneously

#include <bits/stdc++.h>
using namespace std;
int main()
{
if (1) // Replace 1 with 0 and see the magic
{
    label_1: cout <<"Hello ";
    
    // Jump to the else statement after 
    // executing the above statement
    goto label_2;
}
else
{
    // Jump to 'if block statement' if 
    // the Boolean condition becomes false
    goto label_1;

    label_2: cout <<"Geeks";
}
return 0;
}
