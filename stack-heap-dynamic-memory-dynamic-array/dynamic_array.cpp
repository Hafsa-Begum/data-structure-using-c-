#include <iostream>
using namespace std;

int main()
{
    int *a = new int[5];

    for(int i = 0; i<5; i++){
        cin>>a[i];
    }
    for(int i = 0; i<5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

// note::::
// to declare dynamic array use pointer, such as
// int *a = new int[5]
//here a pointer is using to store array address in stack memory.
// require new keyword, after that mention data type and size of array as well
//array input taking, output printing is same as c