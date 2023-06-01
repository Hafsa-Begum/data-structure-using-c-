// Problem Statement

// You will be given two strings S and X. You need to replace all X from string S with a '$' sign.

// Input Format

// First line will contain T, the number of test cases.
// Next T lines will contain a line with S and X.
// Constraints

// 1 <= T <= 1000
// 1 <= |S|, |X| <= 1000
// |X| <= |S|
// Output Format

// For each test cases output the modified string S.
// Sample Input 0

// 2
// thatsagoodmomentforgoodrelations good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
// Sample Output 0

// thatsa$momentfor$relations
// can$tellmewhereicanfindheriwillbegreatefulto$if$tellmetheanswer

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int t; cin>>t;
    for(int k=0; k<t; k++){
        string s; 
        string x; 
        cin>>s>>x;
        while( s.find(x) != -1 ){
            s.replace(s.find(x), x.size(), "$");
        }
        cout<<s;
        if(k!=t-1){
            cout<<endl;
        }
    }

    return 0;
}