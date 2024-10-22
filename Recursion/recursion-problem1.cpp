// Given an array of  n integers and a target value x.Print whether x exists in the array or not.

// With two pointers:
#include<bits/stdc++.h>
using namespace std;
int findx(int *arr, int n,int x){
    int i=0, j=n-1;
    while(i<=j){
        if(arr[i]==x ){
            return i;
        }else if(arr[j]==x){
            return j;
    
        } else{
            i++;
            j--;
        }
    }
    return -1;
}
int main(){
     int arr[] = {1, 2, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int result = findx(arr, n, x);
    cout<<result<<endl;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int findx(int *arr, int n, int x) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x) {
//             return i; // Return the index if x is found
//         }
//     }
//     return -1; // Return -1 if x is not found
// }

// int main() {
//     int arr[] = {1, 2, 4, 5, 6, 7, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 6;
//     int result = findx(arr, n, x);
//     if (result != -1) {
//         cout << "Element " << x << " found at index " << result << endl;
//     } else {
//         cout << "Element " << x << " not found in the array" << endl;
//     }

//     return 0;
// }



