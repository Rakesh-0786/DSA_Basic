// Print the Maximum Value of all Substrings of a String Representing a Number
#include <bits/stdc++.h>
using namespace std;

void subString(string s, int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            string sub = (s.substr(i, len));
            int x = stoi(sub);
            v.push_back(x);
        }
    }
    cout << *max_element(v.begin(), v.end()) << endl;
}

// Driver program to test above function
int main()
{
    string s = "823";
    subString(s, s.length());
    return 0;
}