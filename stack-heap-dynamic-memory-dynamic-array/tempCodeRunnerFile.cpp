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