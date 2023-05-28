#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";
    a+=b;
    a=a+"A";
    a.push_back('W');
    a.pop_back();
    cout<<a<<endl;
    cout<<b<<endl;
    // a.erase(5, 3);
    // a.replace(5,3, "Bo");
    a.insert(5, "Hafsa");
    cout<<a<<endl;
    return 0;
}

//s+= -> append another string
//s.append() -> append another string
//s.push_back() -> add charater at the last of s string
//s.pop_back() -> remove character from s string
//s= -> assign string
//s.erase() -> erase character from string
// a.erase(5, 3); here, 5=till 5 the characters will remain, 3=these 3 charaters will be erased
//s.replace() -> replace a portion of the string
//a.replace(5,3, "Bo"); here, 5=till this index string will remain same, 3=after 5 charaters 3 characters will be replaced with "Bo"
//s.insert() -> insert a portion to specific position
//a.insert(5, "Hafsa"); here, 5=after 5 characters new string "Hafsa" will be inserted.