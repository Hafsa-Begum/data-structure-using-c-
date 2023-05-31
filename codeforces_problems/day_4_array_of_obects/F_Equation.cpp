// Given two numbers X and N. Print the result of the following equation:

// S = (X0 - 1) + (X2) + (X4) + (X6) + ............... + (XN)

// Note: Solve this problem using function and don't use built-in function.

// Input
// Only one line contains two numbers X and N (0 ≤ X, N ≤ 10)

// Output
// Print the equation result S.

// Example
// inputCopy
// 5 5
// outputCopy
// 650
// Note
// First Test :

// (50 - 1) + 52 + 54 = 0 + 25 + 625 = 650.

// link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[2];
    cin>>a[0]>>a[1];
    long long int sum = 0;
    for(int i=0; i<=a[1]; i++){
        if(i>0 && i%2==0){
            sum+=pow(a[0],i);
        }
    }
    cout<<sum<<endl;
    return 0;
}