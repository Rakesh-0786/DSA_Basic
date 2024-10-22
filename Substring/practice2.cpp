// How to get a SubString Before a Character?
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="dog:cat";
    int pos=s.find(":");

    string sub=s.substr(0,pos);
    cout<<"String is :"<<sub<<endl;
    return 0;
}