/*
    author : Keshav Sahu
*/

#include <iostream>
#include "PasswordValidator.h"

using namespace std;

int main()
{
    KM::Password p1;
    string str;
    cout<<"Enter a password!"<<endl;
    cin>>str;
    if(p1.validate(str))
    {
        cout<<"Password is valid"<<endl;
    }
    return 0;
}
