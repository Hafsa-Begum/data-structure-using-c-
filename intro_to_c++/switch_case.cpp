#include <iostream>
using namespace std;

int main()
{
    int val;
    cin>>val;
    switch(val){
        case 0:
            cout<<"Zero"<<endl;
            break;
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        default:
            cout<<"Didn't match!"<<endl;
    }
    return 0;
}

//note::::

//syntax
//switch(value){
//  case value==1:
//      sometihng;
//      break;
//  case value==2:
//      sometihng;
//      break;
//  default:
//      will match this, if not above case.
//}
//must provide break after every case