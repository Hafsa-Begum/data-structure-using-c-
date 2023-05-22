// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.

// Examples
// inputCopy
// 1 2 3
// outputCopy
// 1 3
// inputCopy
// -1 -2 -3
// outputCopy
// -3 -1
// inputCopy
// 10 20 -5
// outputCopy
// -5 20

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    
    max_val = max(a,b);
    max_val = max(max_val, c);
    
    min_val = min(a,b);
    min_val = min(min_val, c);
    
    cout<<min_val<<" "<<max_val<<endl;
    return 0;
}