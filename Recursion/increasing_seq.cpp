// Given a number n, find the increasing sequence from 1 to n without uding any loop:
#include <bits/stdc++.h>
using namespace std;

// Function to generate and return an increasing sequence from 1 to n
vector<int> increasingSequence(int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        result.push_back(i);
    }
    return result;
}

int main() {
    int n = 4;
    vector<int> ans = increasingSequence(n);
    
    // Print the vector
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl; // Newline for better readability

    return 0;
}
