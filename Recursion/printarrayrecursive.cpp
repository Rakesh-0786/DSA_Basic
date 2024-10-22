// given an array, print all the elements of the array recursively.
#include<bits/stdc++.h>
using namespace std;
void findAllElements(int *arr,int idx,int n){
    // base case
    if(idx==n){
        return ;
    }
    // self work
    cout<<arr[idx]<<endl;
    // assume that
    findAllElements(arr,idx+1,n);
}
int main(){
    int n=5;
    int arr[]={6,1,9,3,4};
    findAllElements(arr,0,n);
    return 0;
}