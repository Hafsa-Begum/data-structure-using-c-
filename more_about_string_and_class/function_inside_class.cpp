#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    int marks_1;
    int marks_2;

    Person(string nm, int ag, int n1, int n2){
        name = nm;
        age = ag;
        marks_1 = n1;
        marks_2 = n2;
    }

    void hello(){
        cout<<"Hello, from Person class"<<endl;
    }

    int total_marks(){
        return marks_1+marks_2;
    }
};

int main()
{
    Person asma("Asma Khatun", 27, 80, 95);
    cout<<asma.total_marks()<<endl;
    asma.hello();
    cout<<asma.age<<endl;
    return 0;
}

// note::::
//like variable in class, function can be written inside class
//value can be returned from function or it can be simple function which not return anything.