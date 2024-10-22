// Get a Sub-String after a character
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take any String
    string s="dog:cat";

    // Find position off ':' using find()
    int pos=s.find(":");
    
    // Copy substring after pos
    string sub=s.substr(pos+1);
    cout<<"String is: "<<sub;
    return 0;
}