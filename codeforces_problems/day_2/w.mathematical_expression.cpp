// Given a mathematical expression. The expression will be one of the following expressions:

// A + B = C, A - B = C and A * B = C

// where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

// Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

// Input
// Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

// Output
// Output either "Yes" (without the quotation) or the right answer depending on the statement.

// Examples
// inputCopy
// 5 + 10 = 15
// outputCopy
// Yes
// inputCopy
// 3 - 1 = 2
// outputCopy
// Yes
// inputCopy
// 2 * 10 = 19
// outputCopy
// 20

// link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <iostream>
using namespace std;

int main() {
    long long int a, b, c;
    char s, q;
    cin>>a>>s>>b>>q>>c;
    if(q=='='){
        if(s=='+'){
            if(a+b==c){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<a+b<<endl;
            }
        }
        if(s=='-'){
            if(a-b==c){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<a-b<<endl;
            } 
        }
        if(s=='*'){
            if(b*a==c){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<a*b<<endl;
            }
        }
    }
    return 0;
}