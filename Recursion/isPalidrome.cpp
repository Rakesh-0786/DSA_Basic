// check whether the the number is palidrome or not?
#include<bits/stdc++.h>
using namespace std;
bool f(int num,int *temp){
    // base case
    if(num>=0 && num<=9){
        int lastDigitOfTemp=(*temp)%10;
        (*temp)/=10;
        return (num==lastDigitOfTemp);
    }
    bool result=(f(num/10,temp)&&(num%10)==((*temp)%10));
    (*temp)/=10;
    return result;
}
int main(){
    int num=121;
    int anotherNum=num;
    int *temp=&anotherNum;
    cout<<f(num, temp);
    return 0;
}