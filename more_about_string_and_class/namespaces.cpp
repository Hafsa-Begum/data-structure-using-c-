#include <bits/stdc++.h>
using namespace std;
namespace hafsa 
{
    int x=10;
    void namespaceFun()
    {
        cout<<"hello namespaces function"<<endl;
    }
    class Person{
        public:
        string name;
        int age;

        Person(string name, int age)
        {
            this->age = age;
            this->name = name;
        }
    };
}
using namespace hafsa;
int main()
{
    Person safiyya("Safiyya Noor", 3);
    cout<<safiyya.name<<endl;
    cout<<safiyya.age<<endl;
    cout<<x<<endl;
    namespaceFun();
    return 0;
}

//note::::
//syntax of declaring namespace
//namespace name_of_namespace{}
//to call namespace
//name_of_namespace::variable/function/class etc.
//example: hafsa::x;
//in c++ namespaces is a feature of code to organize in a specific way where variables, functions and classes can be present at a time.
//this namespaces feature used to avoid conflict in different groups of code.
//advantages of namespace:
//effectively manage and structure codebase
//minimize naming conflicts
//create modular and maintainable codebase