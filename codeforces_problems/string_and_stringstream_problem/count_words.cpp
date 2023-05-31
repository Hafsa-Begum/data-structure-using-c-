// Given a string 𝑆
// . Print number of words in it.

// Word : consists of lowercase and uppercase English letters.

// Input
// Only one line contains 𝑆
//  (1≤|𝑆|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces and ('!', '.', '?' and ',') symbols.

// Output
// Print the number of words in the given string.

// Examples
// inputCopy
// Meep Meep!
// outputCopy
// 2
// inputCopy
// I tot I taw a putty tat.
// outputCopy
// 7
// inputCopy
// I did! I did! I did taw a putty tat.
// outputCopy
// 10
// inputCopy
// Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...
// outputCopy
// 9

// link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

// using stringstream
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     string word;
//     int count = 0;
//     while(ss>>word){
//         if(word=="..."){
//             continue;
//         }
//         count++;
//     }
//     cout<<count<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool inside_word = false;
    int cnt = 0;
    for(char c:s){
        if(isalpha(c)){
            if(inside_word==false) cnt++;
            inside_word=true;
        }
        else
        {
            inside_word=false;
        }
    }
    cout<<cnt<<endl;
    return 0;
}