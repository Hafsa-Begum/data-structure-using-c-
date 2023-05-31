// Given a string 𝑆
// . For each word in 𝑆
//  reverse its letters then print it.

// Note: words are separated by space.

// Input
// Only one line contains a strings 𝑆
//  (1≤|𝑆|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

// Output
// Print the answer required above.

// Examples
// inputCopy
// I love you
// outputCopy
// I evol uoy
// inputCopy
// You love me
// outputCopy
// uoY evol em
// inputCopy
// We are a happy family
// outputCopy
// eW era a yppah ylimaf

// link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

#include <bits/stdc++.h>
using namespace std;
void print(string& s){
    for(int i=s.size()-1; i>=0; i--){
        cout<<s[i];
    } 
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool first_word = true;
    while(ss>>word){
        if(!first_word){
        cout<<" ";
        }
        print(word);
        first_word=false;
    }
    return 0;
}