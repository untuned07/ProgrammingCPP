// String is a character of arrays

/*
Character Arrays: 
Need to know size beforehand.
Larger size required for operations (concatenate or append).
No terminating extra character.

Strings: 
No need to know size beforehand.
Performing operations like concatenation and append is easier.
Terminated with a special character '\0'.
*/

#include <iostream>
#include <string>         //header file to use special methods of strings
using namespace std;

int main(){
/*
    string str;
    cin >>str;
    cout <<str <<endl;
    string str1(5, 'k');    //to fill '5' values to str1 with the letter 'k'
                            //output must be 'kkkkk'
    cout <<str1 <<endl;
    string str2 = "Programming";
    cout <<str2;
*/

/*
    string str3;
    getline(cin, str3);     //used to read complete line. It is a function of <string> header file
                            //cin only reads the first word seperated by ' ' (space)
                            //getline function will not work if console is not flushed early
    cout <<str3 <<endl;
*/

/*
    string s1="fam", s2 = "ily";
    s1.append(s2);          //adds s2 after s1. Overall "fam" + "ily" = family
                            //simply does s1 = s1 + s2
    cout <<s1 <<endl;
    string s3 = "Forn", s4="eus";
    cout <<s3 + s4 <<endl;  //another way to append strings without changing the strings
*/

    // cout<<s3[2] <<endl;  //to access particular element of a string

/*
    string abc="Hippopotomonstrosesquippedaliophobia";
    abc.clear();            //clears or empties a string
    cout <<abc <<endl;
*/

/*
    string s1="abc", s2="xyz";
    cout <<s1.compare(s2) <<endl;       //negative value denotes it(s1) is smaller than other(s2) string
    cout <<s2.compare(s1) <<endl;       //positive value denotes it(s2) is greater than otehr(s1) string
*/                                      //zero(0) denotes that stings are equal
    
/*
    string str = "abcde";
    cout <<str <<endl;
    str.clear();
    if(str.empty()){                    //empty() function checks id the string is empty.
                                        //here it was cleared so its true case.
        cout <<"String is empty." <<endl;
    }
*/

/*
    string str="forneus";
    str.erase(2, 3);                    //erase function removes the characters from any index.
                                        //2 is the index and 3 is the number of characters erased
    cout <<str <<endl;
*/


    string str = "forneus";
    cout <<str.find("for") <<endl;      //find() function finds the substring of a string.
    cout <<str.find("neu") <<endl;      //it return the index value where it is found


/*
    string str="forneus";
    str.insert(2, "high");              //insert() function inserts a string in between of a string
    cout <<str <<endl;
*/

/*    
    string str="forneus";
    cout <<str.size() <<endl;           //displays the length of the string
    cout <<str.length() <<endl;
*/

/*
    string str="forneus";
    string s1= str.substr(3, 4);        //returns the substring of a string
                                        //3 is the index and 4 is number of characters
    cout <<s1 <<endl;
*/

/*
    string str="786";
    int a= 786;
    int x = stoi(str);                  //stoi stands for string to integer.
                                        //it converts numeric string to integer.
                                        //works on Compiler 11+ versions only.
    cout <<x <<endl;
    cout <<to_string(a) +"2" <<endl;    //to_string() function converts numberic value to string.
                                        //works on Compiler 11+ versions only.
*/

    return 0;
}