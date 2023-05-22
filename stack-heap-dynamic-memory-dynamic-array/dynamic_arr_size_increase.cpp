#include <iostream>
using namespace std;

int main()
{
    int *a = new int[5];
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    int *b = new int[7];
    for(int i=0; i<5; i++){
        b[i]=a[i];
    }
    b[5]=60;
    b[6]=70;
    for(int i=0; i<7; i++){
        cout<<b[i]<<" ";
    }
    delete [] a;
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

//here the values of array a is inserted into array b where the size of b is bigger than a,
//then the array is deleted as it will no longer used in anywhere
//this is the prove increase of an array size
//at first array size was 5, but last we are able to increase the size to 7!
//to delete array from cpp. delete keyword is used
//for array [] backets used after delete keyword
// syntax for delete array
// delete [] name_of_array
//example: delete [] a;
//syntax for delete a value
//delete name_of_variable
//example: delete f;
