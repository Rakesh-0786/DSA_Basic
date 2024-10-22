// Remove all the occurences of a from string s='abcax'.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="abcaxkahajsdhnkjanja";
//     char c='a';
//     string result="";
//     for(char ch:s){
//         if(ch==c){
//              ch++;
//         } else{
//           result+=ch;
//         }
//     }
//     s=result;
//     cout<<s<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="asjvafjkvkfaAaaa";
  char c='a';
  string result="";
  for(int i=0;i<s.length();i++){
    if(s[i]!=c){
      result+=s[i];
    }
  }
  cout<<result;
  return 0;
}