#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    string x;
    cin>>x;
    string word;
    int cnt;
    while(ss>>word){
        if(word==x){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}