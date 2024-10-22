// For a given array, print the maxium value 
#include<bits/stdc++.h>
using namespace std;
int findMaxElements(int *arr,int idx,int n){
    // base case
    if(idx==n-1){
        return arr[idx];
    }
    return max(arr[idx],findMaxElements(arr,idx+1,n));
}
int main(){
    int arr[]={3,50,3,2,5};
    int n=5;
    cout<<findMaxElements(arr,0,n);
    return 0;
}