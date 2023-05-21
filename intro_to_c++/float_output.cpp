#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    cin>>a;
    cout<<fixed<<setprecision(2)<<a<<endl;
    return 0;
}

//note::::

//to take floating value after decimal point, use fixed<<setprecision(num)<<float_val
//num is referring the numbers after decimal point
//must have to use header file <iomanip>