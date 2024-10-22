// Given two numbers p & q, find the value p^q using a recursive function.
#include<bits/stdc++.h>
using namespace std;
int powerDigit(int p,int q){
    // base case
    if(q==0){
        return 1 ;
    }
    int ans=p*powerDigit(p,(q-1));
    return ans;
}
int main(){
    int result=powerDigit(2,3);
    cout<<result<<endl;
    return 0;
}