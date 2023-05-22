// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.

// Example
// inputCopy
// 5
// 1 8 5 7 5
// outputCopy
// 8

// link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E


#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max_val=INT_MIN;
    for(int i=0; i<n; i++){
        max_val = max(max_val, a[i]);
    }
    cout<<max_val<<endl;
    return 0;
}