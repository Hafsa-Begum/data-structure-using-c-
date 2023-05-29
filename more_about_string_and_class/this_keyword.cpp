#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        // (*this).name = name;
        // (*this).age = age;
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person asma("Asma Khatun", 27);
    cout<<asma.age<<endl;
    return 0;
}

//note::::
//this is a pointer that is referred to the current object instance
//it allows to access current object members like variable and functions
//purpose of this keyword:
//access member variables in obejct
//referrencing the current object
//resolving naming conflicts