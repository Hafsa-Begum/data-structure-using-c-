#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    // string::iterator it;
    for(auto it=s.begin(); it<s.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}

//s.begin() -> pointer to the first elemnet
//s.end() -> pointer to the next element after the last element of the string 