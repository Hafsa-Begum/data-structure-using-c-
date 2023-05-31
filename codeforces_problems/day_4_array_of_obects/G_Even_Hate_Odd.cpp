// You are given an array 𝑎
//  of 𝑛
//  integers. You have two kinds of operations

// increment any element in 𝑎
//  (increase it by one).
// decrement any element in 𝑎
//  (decrease it by one).
// What is the minimum number of operations to make the number of even elements equal to the number of odd elements, or detect that this is impossible?

// Input
// The first line contains a single integer 𝑡(1≤𝑡≤10)
//  the number of test cases.

// The first line of each test case contains an integer 𝑛(1≤𝑛≤105)
//  the number of elements in the array 𝑎
//  .

// The second line of each test case contains 𝑛
//  integers 𝑎𝑖(1≤𝑎𝑖≤105)
//  the elements of the array 𝑎
// .

// Output
// For each test case, print the minimum number of operations required, or −1
//  if it's impossible

// Example
// inputCopy
// 3
// 4
// 1 2 3 4
// 4
// 1 1 1 1
// 3
// 1 2 3
// outputCopy
// 0
// 2
// -1

// link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }

        else{
            int mid = n / 2;
        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (even > odd)
        {
            cout << even - mid << endl;
        }
        else if (even<odd)
        {
            cout << odd - mid << endl;
        }
        else
        {
            cout <<"0"<< endl;
        }
        }
    }
    return 0;
}