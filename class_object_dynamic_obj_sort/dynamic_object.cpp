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
    Student* kasim = new Student(19, 'D', 7, "Kasim Rahim");
    //(*kasim).
    //kasim->
    cout<<kasim->cls;

    // to delete object
    delete kasim;
    return 0;
}

//one of the advantage of dynamic object is object can be deleted after use of that
// without constructor to write dynamic object the procedure is
// name_of_class * name_of_object = new name_of_class;
//if there is constructor to write dynamic object like below
//name_of_class * name_of_object = new name_of_class(parameters);
//to access any value of obejct in dynamic array first need to dereferrence the object.
//then using dot any value can be found. such as
//(*kasim).name
//first dereferrence using * notation, then closed it in a bracket and then the value of name can be accessed.
//shortcut of (*kasim.)
//kasim->
//to delete a object use delete keyword and name of object.such as
// delete kasim;
