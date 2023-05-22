#include <iostream>
using namespace std;

int main()
{
    int *a = new int;
    *a = 10;
    cout<<a<<endl; //printing address of a
    cout<<*a<<endl; //value in the above address
    return 0;
}