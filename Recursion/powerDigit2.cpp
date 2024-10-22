#include<bits/stdc++.h>
using namespace std;
int powerDigit(int p,int q){
    // base case
    if(q==0){
        return 1;
    }
    if(q%2==0){
        // if q is even
        int result=powerDigit(p,q/2);
        return result*result;
    }else{
        // if q is odd
        int result=powerDigit(p,(q-1)/2);
        return p* result*result;
    }
}
int main(){
    int res=powerDigit(2,5);
    cout<<res<<endl;
    return 0;
}