#include<iostream>
#include <string>
using namespace std;

int main(){
    /* Valid Rules for Variable Names in C++:
Can include:

Letters (a–z, A–Z)

Digits (0–9)

Underscores (_)

Cannot begin with a digit

Cannot be a C++ keyword or reserved word

No special characters allowed

Only _ is allowed as a special character.

Case-sensitive
*/
    int a=1,b=2,c=3;
    short d=10;
    long e=1000000;
    float f=10.5;
    double g=10.5;
    char h='A';
    bool i=true;
    string j="hello world";
    cout<<a<<endl
    <<b<<endl
    <<c<<endl
    <<d<<endl
    <<e<<endl
    <<f<<endl
    <<g<<endl
    <<h<<endl
    <<i<<endl
    <<j<<endl;
    return 0;
}