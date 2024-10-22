#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    // base case 
    if(n==1){
        return 1;
    }
    //  assumption=factorial(n-1);
    // self work 
    // int ans=n*factorial(n-1);
    return n*factorial(n-1);
}
int main(){
    int result=factorial(4);
    cout<<result<<endl;
    return 0;
}