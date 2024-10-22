// Given an array of integers ,prints sums of all subsets in it.Output sums can be printed in any order.

#include<bits/stdc++.h>
using namespace std;
void subsetSum(int *arr,int n, int i,int sum, vector<int>&result){
    // base case 
    if(i==n){
        result.push_back(sum);
        return;
    }
    subsetSum(arr, n,i+1,sum+ arr[i],result); //pick the ith element
    subsetSum(arr,n,i+1,sum,result); //donot pick the ith element
}
int main(){
    int arr[]={2,4,5};
    int n=3;
    vector<int>result;
    subsetSum(arr,n,0,0,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}