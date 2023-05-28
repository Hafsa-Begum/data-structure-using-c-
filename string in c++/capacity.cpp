#include <iostream>
using namespace std;

int main()
{
    // string s="Hafsa";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // cout<<s.capacity()<<endl;
    // s.clear();
    // cout<<s<<endl;
    // if(s.empty() == true){
    //     cout<<"empty"<<endl;
    // }
    // else{
    //     cout<<"not empty"<<endl;
    // }
    string s="failure";
    // cin>>s;
    s.resize(4);
    cout<<s<<endl;
    s.resize(8, 'X');
    cout<<s<<endl;
    return 0;
}

//s.size() -> returns the size of the string
//s.max_size() -> returns the maximum size the string can hold
//s.clear() -> clear the string
//s.empty() -> return true/false if the string is empty
//s.resize() -> change the size of the string, after changing string size, new character can be inserted in string