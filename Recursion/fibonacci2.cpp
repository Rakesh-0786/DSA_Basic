#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    // base case
    if(n==0){
        return 0;
    } else if(n==1){
        return 1;
    } 
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    int result=fib(8);
    cout<<result<<endl;
    return 0;
}