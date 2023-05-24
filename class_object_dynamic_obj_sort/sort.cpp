#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n); //smaller to greater
    sort(a, a+n, greater<int>()); //greater to smaller
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}