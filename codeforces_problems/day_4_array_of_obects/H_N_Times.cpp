// Given a number 𝑁
//  and a character 𝐶
// . Print the character(𝐶
// ) 𝑁
//  times.

// Note: Solve this problem using function.

// Input
// The first line contains a number 𝑇
//  (1≤𝑇≤50)
//  the number of test cases.

// Next 𝑇
//  lines contains a number 𝑁
//  and a character 𝐶
//  (1≤𝑁≤100)
// .

// Output
// Print 𝑇
//  lines, for every line print the character(𝐶
// ) 𝑁
//  times separated by space.

// Examples
// inputCopy
// 2
// 1 n
// 5 O
// outputCopy
// n 
// O O O O O 
// inputCopy
// 1
// 8 z
// outputCopy
// z z z z z z z z 

// link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

#include <bits/stdc++.h>
using namespace std;
class printCharNTimes{
    public:
    int n;
    char c;
};
int main()
{
    int num;
    cin>>num;

    printCharNTimes a[num];

    for(int i = 0; i<num; i++){
        cin>>a[i].n>>a[i].c;
    }
    for(int i = 0; i<num; i++){
        for(int j=0; j<a[i].n; j++){
            cout<<a[i].c<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}