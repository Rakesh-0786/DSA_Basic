#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    } else if(n==1){
        return 1;
    }
    int a=0,b=1;
    for(int i=2;i<=n;i++){
        int ans=a+b;
        a=b;
        b=ans;
    }
    return b;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int result=fibonacci(n);
    cout << "Fibonacci number F(" << n << ") is " << result << endl;
    return 0;
}