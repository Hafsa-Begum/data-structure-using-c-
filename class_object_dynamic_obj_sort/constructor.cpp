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
int main()
{
    Student kasim(19, 'D', 7, "Kasim Rahim");
    Student mahim(49, 'B', 9, "Mahim Karim");

    cout<<mahim.name;
    return 0;
}

//on above class there is a function named Student 
//which is called automatically when the class is used to make any object
//this function is called constructor
//to inserting value for an object it's very repetitive task to insert info using dot notation
//so constructor minimize code repetition here
