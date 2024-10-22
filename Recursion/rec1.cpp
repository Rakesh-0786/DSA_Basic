// Print if x  exists in the array or not.
#include<bits/stdc++.h>
using namespace std;
bool findx(int *arr, int n, int i, int x){
    // base case
    if(i==n){
        // array is exhausted
        return false;
    }
    return arr[i]==x || findx(arr,n,i+1,x);
}
int main(){
    int arr[]={5,4,1,8,6,-9,8,2,3,5};
    int n=10;
    int x=8;
    bool result=findx(arr,n,0,x);
        cout<<result;
    return 0;
}