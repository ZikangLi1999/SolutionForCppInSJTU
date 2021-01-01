#include <iostream>
#include <bitset>

using namespace std;

void printInt(int decimalInteger,int targetBase);

int main()
{
    int n,base;

    do
    {
        cout<<"Please input decimally positive integers n,base (2<=base<=16):";
        cin>>n>>base;
    }while (base<2||base>16);

    cout<<n<<"(10)=";
    printInt(n,base);
    cout<<'('<<base<<')';

    return 0;
}

void printInt(int n,int base)
{
    int quotient=n,remainder=1,count=0,temp;
    char ch='0';
    char *string=new char[ch];

    while(quotient!=0)
    {
        remainder=quotient%base;
        if (remainder>9)
            ch='A'+remainder-10;
        else ch='0'+remainder;
        ++count;
        string[count]=ch;
        quotient=quotient/base;
    }
    for (int i=0;i<count/2;++i)
    {
        temp=string[i];
        string[i]=string[count-i];
        string[count-i]=temp;
    }
    for (int i=0;i<count;++i)
        cout<<string[i];
}
