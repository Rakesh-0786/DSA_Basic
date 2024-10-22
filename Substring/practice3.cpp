// How to Print all Sub-String of a given String?
// Given a string as an input. We need to write a program that will print all non-empty substrings of that given string.

#include<bits/stdc++.h>
using namespace std;
void subString(string s,int n){
    for(int i=0;i<n;i++){
        for(int len=1;len<=n-1;len++){
            cout<<s.substr(i,len)<<endl;
        }
    }
}
int main(){
    string s="absc";
    subString(s,s.length());
    return 0;
}