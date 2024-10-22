// Given two numbers x and y, find the gcd using recursion
#include<bits/stdc++.h>
using namespace std;
int findGcd(int a, int b){
    if(b>a){
        return findGcd(b,a);
    } 
    // base case
    if(b==0){
        return a;
    }
    return findGcd(b,a%b);
}
int main(){
    cout<<findGcd(40,48);
    return 0;
}