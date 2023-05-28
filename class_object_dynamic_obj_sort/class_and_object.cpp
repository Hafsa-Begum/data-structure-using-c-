// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student
// {
//     public:
//         char name[100];
//         int roll;
//         int cls;
//         char section;
// };
// int main()
// {
//     Student rahim;
//     rahim.roll = 29;
//     rahim.cls = 9;
//     rahim.section = 'A';
//     char nm[100] = "Rahim Khan";
//     strcpy(rahim.name, nm);

//     Student mahim;
//     mahim.roll = 49;
//     mahim.cls = 9;
//     mahim.section = 'B';
//     char nm2[100] = "Mahim Khalil";
//     strcpy(mahim.name, nm2);

//     cout<<mahim.name;
//     return 0;
// }

//class is used to take a group of information regarding a type of anything
//object is made using common class
//on above code Student is a class
//rahim, mahim are objects made using same Student class
//all of the information about a student is written in class
//inside class must need to mention public.
//without writing public, private and protected can be written
//public means this class can be used from anywhere.

#include <iostream>
#include <string.h>
using namespace std;

class Person{
    public:
    char name[100];
    float height;
    int age;

    Person(char*nm, float h, int a){
        strcpy(name, nm);
        height=h;
        age=a;
    }
};

int main()
{
    //create dynamic object here
    Person* ninit = new Person("Ninit", 5.5, 25);
    Person* mahim = new Person("Mahim", 5.7, 28);

    if(ninit->age > mahim->age){
        cout<<"Ninit"<<endl;
    }
    else{
        cout<<"Mahim"<<endl;
    }
    return 0;
}

// class Car{
//     public:
//     char model[100];
//     int price;
//     char color[50];
// };
// int main()
// {
//     Car toyota;
//     toyota.price=500000;
//     char m[100] = "Toyota";
//     strcpy(toyota.model, m);
//     char c[100] = "Black";
//     strcpy(toyota.color, c);
//     cout<<"model: "<<toyota.model<<endl<<"price: "<<toyota.price<<endl<<"color: "<<toyota.color<<endl;
//     return 0;
// }