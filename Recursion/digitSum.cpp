// Given an integer , find out the sum of its digits using recursion

#include<bits/stdc++.h>
using namespace std;
int findDigitSum(int n){
    // base case
    if(n>=0 && n<=9){
        return n;
    }
    int ans=findDigitSum(n/10)+(n%10);
    return ans;
}
int main(){
    int result=findDigitSum(1234);
    cout<<result;
    return 0;
}