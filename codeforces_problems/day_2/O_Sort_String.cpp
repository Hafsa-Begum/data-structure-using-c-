#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    char s[n];
    int freq[26]={0};
    for(int i=0; i<n; i++){
        cin>>s[i];
        freq[s[i]-'a']++;
    }
    // sort(s, s+n);
    // sort(freq, freq+26);
    for(int i=0; i<26; i++){
        while(freq[i]>0){
            cout<<s[i+'a'];
            freq[i]--;
        }
    }
    return 0;
}