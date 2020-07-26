#include <iostream>
#include "inlcude\PasswordValidator.h"

using namespace std;

int main()
{
    KS::Password p1;
    string str;
    cout<<"Enter a password!"<<endl;
    cin>>str;
    if(p1.validate(str))
    {
        cout<<"Password is valid"<<endl;
    }
    return 0;
}
