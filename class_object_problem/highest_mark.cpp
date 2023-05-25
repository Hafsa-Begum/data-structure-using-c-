#include <iostream>
#include <string.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char *nm, int r, char s, int marks, int c ){
        strcpy(name, nm);
        roll=r;
        section=s;
        math_marks=marks;
        cls=c;
    }

};

int main()
{
    Student rahim("Rahim", 10, 'D', 45, 9);
    Student mahim("Mahim", 19, 'D', 59, 9);
    Student karim("karim", 44, 'D', 78, 9);

    if(rahim.math_marks>mahim.math_marks && rahim.math_marks>karim.math_marks){
        cout<<"Rahim"<<endl;
    }
    else if(mahim.math_marks>rahim.math_marks && mahim.math_marks>karim.math_marks){
        cout<<"Mahim"<<endl;
    }
    else
    {
        cout<<"Karim"<<endl;
    }
    return 0;
}