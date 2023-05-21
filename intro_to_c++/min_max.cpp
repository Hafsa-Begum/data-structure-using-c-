#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int min_val = min(a,b);
    int max_val = max(a,b);
    cout<<"min value = "<<min_val<<endl;
    cout<<"max value = "<<max_val<<endl;
    return 0;
}

//to get min, max value, there is built in function min(a,b), max(a,b)
//to use this min(), max(), there must have to use <algorithm> headerfile
//min, max can be found from using two values only.