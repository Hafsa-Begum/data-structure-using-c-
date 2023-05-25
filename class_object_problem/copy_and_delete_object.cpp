#include <iostream>
using namespace std;

class Cricketer{
    public:
    int jersey_no;
    char country[100];

};
int main()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *kohli = new Cricketer;
    dhoni->jersey_no = 8;
    char cntry[100] = "india";
    strcpy(dhoni->country,cntry);
    // kohli=dhoni; //value copied but deleted from kohli also after delete
    // *kohli=*dhoni; //value copied to kohli and data contained in kohli
    kohli->jersey_no=dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);
    delete dhoni;
    cout<<dhoni->country<<endl<<dhoni->jersey_no<<endl;
    cout<<kohli->country<<endl<<kohli->jersey_no<<endl;
    return 0;
}