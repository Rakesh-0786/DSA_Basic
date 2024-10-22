#include<bits/stdc++.h>
using namespace std;
int findLargest(vector<int>&arr){
    int n=arr.size();
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    
    return largest;
}
int main(){
    vector<int>arr={12,35,1,10,34,1};
    int result=findLargest(arr);
    cout<<result;
    return 0;
}