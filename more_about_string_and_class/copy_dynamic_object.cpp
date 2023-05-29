#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person* asma = new Person("Asma Khatun", 27);
    Person* maruf = new Person("Maruf Hussain", 29);
    //asma=maruf; //not the way to copy object, because if maruf deleted , asma value will be deleted automatically, as asma using maruf's memory.
    // asma->age = maruf->age; //can be done, but less efficient
    // asma->name = maruf->name;
    *asma = *maruf; //most efficient to copy object
    delete maruf;
    cout<<asma->name<<endl;
    return 0;
}