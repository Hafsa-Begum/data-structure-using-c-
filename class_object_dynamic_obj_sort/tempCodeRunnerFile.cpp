#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r, char s, int c, char* n)
        {
            roll = r;
            section = s;
            cls = c;
            strcpy(name, n);
        }
};
Student fun(){
    char name[100] = "Jasim Uddin";
    Student r(55, 'C', 10, name);
    return r;
}
int main()
{
   Student jasim = fun();

    cout<<jasim.name<<endl;
    cout<<jasim.roll<<endl;
    cout<<jasim.cls<<endl;
    cout<<jasim.section<<endl;
    return 0;
}