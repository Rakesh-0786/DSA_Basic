#include<bits/stdc++.h>
using namespace std;
string removeOccurence(string &s,int idx,int n){
    // base case
    if(idx==n){
        return "";
    }
    string curr="";
    curr+=s[idx];
    return ((s[idx]=='a') ? "":curr)+removeOccurence(s,idx+1,n);
}
int main(){
    string s="abcax";
    int n=5;
    cout<<removeOccurence(s,0,n);
    return 0;
}