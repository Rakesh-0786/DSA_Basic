// for a given array, find the sum of values of an array.
#include<bits/stdc++.h>
using namespace std;
int  findSum(int *arr,int idx,int n){
    // Base Case
    // if the one elements are present in the array then the sum of the array is given elements.

    if(idx==n-1){
        return arr[idx] ;
    }
    int ans=arr[idx]+findSum(arr,idx+1,n);
    return ans;

}
int main(){
    int n=5;
    int arr[]={1,3,5,9,7};
    cout<<findSum(arr,0,n);
    return 0;
}