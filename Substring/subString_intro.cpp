/*The substring function is used for handling string operations like strcat(), append(),etc.
It generates a new string with its value initialized to a copy of a sub-string of this object.
In C++, the header file which is required for std::substring(), string function is <string>.

The substring function takes two values pos and len as an argument and return a newly costructed sting with its value initialized to a copy of a sub-string of this  object.
Copying of string starts from pos and is done till pos+len means[pos, pos+len].

Syntax:

string substr(size_t pos, size_t len)const;
parameters:
pos.Position of the first character to be copied.
len: Length of the sub-string.
size_t: It is an unsigned integral type.
Return Value: It return a string object.

Example:
program to demonstrate functioning of substr()

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take any String
    string s1="Geeks";

    // Copy two characters of s1(starting) from position 3
    string r=s1.substr(3,2);
    cout<<"String is: "<<r;
    return 0;
}