#include <iostream>
#include <cstring>
#include "LongLongInt.h"

using namespace std;

int main()
{
    string str1,str2,str3;

    cout<<"Please input integer strings (str1,str2,str3):\n";
    cin>>str1>>str2>>str3;

    LongLongInt llt1(str1),llt2(str2),llt3(str3);
    cout<<"\nLongLongInt1="<<llt1
        <<"\nLongLongInt2="<<llt2
        <<"\nLongLongInt3="<<llt3<<endl;
    cout<<"\nLongLongInt1+LongLongInt2="<<llt1+llt2;
    cout<<"\nLongLongInt1+LongLongInt3="<<llt1+llt3;
    cout<<"\nLongLongInt2+LongLongInt3="<<llt2+llt3<<endl;

    return 0;
}
