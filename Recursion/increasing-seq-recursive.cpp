// Given a number n.Find the increasing sequence from 1 to n without using any loop.

#include<bits/stdc++.h>
using namespace std;
void f(int n){
    // base case
    if(n<1){
        return ;
        // go and print first n-1 natural numbers
    }
    f(n-1);
    cout<<n<<" ";

}
int main(){
    f(4);
    return 0;
}