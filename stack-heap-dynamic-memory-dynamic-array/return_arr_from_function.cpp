#include <iostream>
using namespace std;
int *fun(){
    int *a = new int[5]; //dynamic memory allocation
    // int a[5]; //stack memory allocation
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    return a; //possible in dynamic memory
}
int main()
{
    int *a = fun();
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
}

//here, we have seen the array can be returned from fun() function
//it's possible due to dynamic memory allocation
//in stack memory system where array declared using int a[5], is not possible to return array from function