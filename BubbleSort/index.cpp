// bublesort:- 
// Repeatedly swap two adjacent elements if they were in wrong order.

// stable:-
// does not distrub the order of elements with same value.

// unstable:- may or may not be distrub the order of element with the same value

// example:
// 40,30,10,20,30
// stable:-10,20,30,30,40
// unstable:-10,20,30,30,40

// so the bubble sort algorithm is a stable sort.
// beacuse in which we only swap the adjacent elements if the elements are in wrong order 
// and not swap if the elements are equal.So

// time-complexity: o(n2)
// space complexity:-o(1);
// max-swap -> n(n-1)/2
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &v){
    int n=v.size();
     
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                flag=true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag){
            break;
        }
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    bubbleSort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}