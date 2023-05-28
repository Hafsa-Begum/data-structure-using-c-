#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    cout<<s[0]<<endl;
    cout<<s.at(0)<<endl;
    cout<<s.front()<<endl;
    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl;
    return 0;
}

//s[i] -> access the ith index of the string
//s.at() -> similar functionality as s[i]
//s.front() -> access the first element of the string
//s.back() -> access the last element of the string