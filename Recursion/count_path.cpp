// The problem is to count all the posible paths on an m*n grid from top left (grid[0][0]) to bottom right (grid(m-1)[n-1]);

// constraints- Having constraints that from each cell you can either move only to right or down.

// self-work= f(i,j,m,n) ->this returns no.of ways to reach m-1, n-1 from i, j we can only move right  & down.

// Assumption:-1.f(i,j+1,m,n) -> we assume function f  works correctly for i,j+1 i.e it correctly gives no. of ways ti reach B.R from right cell.
// 2.f(i+1,j,m,n) -> we assume function f works correctly for i+1, j i.e it correctly gives no of ways to reach B.R from down cell.

// f(i,j,m,n)=f(i,j+1,m,n)+f(i+1,j,m,n);

#include<bits/stdc++.h>
using namespace std;
int findPath(int i,int j,int m,int n){
    // base case
    if(i==m-1 && j==n-1){
        return 1;
    }  //means if we already at the bottom then the possible ways is 1

    if(i>=m || j>=n){
        return 0; //means if the elements are outside the grid then it never come back so it return 0
    }
     return findPath(i,j+1,m,n)+findPath(i+1,j,m,n);
    
}
int main(){
    cout<<findPath(0,0,2,3);
    return 0;
}