// convert decimal to binary
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int ans=0;
    int power=1;
    while(n>0){
        int paritydigit=n%2;
        ans=ans+paritydigit*power;
        power=power*10;
        n=n/2;
    }
cout<<ans<<endl;
return 0;
            
}