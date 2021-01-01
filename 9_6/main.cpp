#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long double recg(char *str,int length);

int main()
{
    int length;
    char test='y';
    char str[81];

    while (test=='y'||test=='Y')
    {
        cout<<"Please input:\n";
        cin.getline(str,80,'?');
        length=strlen(str);
        cout<<recg(str,length)<<endl;

        cout<<"Go on?(y/n):";
        cin>>test;
        cout<<endl;
    }

    return 0;
}

long double trans(double data,int etype,int ntype);

long double recg(char*str,int length)
{
    int etype=0,ntype=0,temp=0,decim=1;
    long double data=0;
    bool flag=true,test1=false,test2=false,test3=false;

    for (int i=0;i<length;++i)
        if (str[i]>'A'&&str[i]<'Z') str[i]=str[i]-'A'+'a';//¹ýÂË´óÐ´×ÖÄ¸

    for (int i=0;i<length;++i)
    {
        if (str[i]!='i'&&str[i]!='f') continue;
        else
        {
            if (str[i]=='i'&&str[i+1]=='n'&&str[i+2]=='c'&&str[i+3]=='h') {etype=0; test1=true; break;}
            if (str[i]=='f'&&str[i+1]=='e'&&str[i+2]=='e'&&str[i+3]=='t') {etype=1; test1=true; break;}
            if (str[i]=='y'&&str[i+1]=='a'&&str[i+2]=='r'&&str[i+3]=='d') {etype=2; test1=true; break;}
        }
    }

    for (int i=0;i<length;++i)
    {
        if (str[i]!='m'&&str[i]!='c'&&str[i]!='d') continue;
        else
        {
            if (str[i]=='m'&&str[i+1]=='i'&&str[i+2]=='l') {ntype=0; test2=true; break;}
            if (str[i]=='c'&&str[i+1]=='e'&&str[i+2]=='n') {ntype=1; test2=true; break;}
            if (str[i]=='d'&&str[i+1]=='e'&&str[i+2]=='c') {ntype=2; test2=true; break;}
            if (str[i]=='m'&&str[i+1]=='e'&&str[i+2]=='t') {ntype=3; test2=true; break;}
        }
    }

    for (int i=0;i<length;++i)
    {
        if (str[i]>='0'&&str[i]<='9'&&flag)
        {
            temp=str[i]-'0';
            data=10*data+temp;
            test3=true;
        }

        if (str[i]=='.') flag=false;

        if (str[i]>='0'&&str[i]<='9'&&!flag)
        {
            temp=str[i]-'0';
            data+=pow(0.1,decim)*temp;
        }
    }

    if (test2&&test2&&test2) return trans(data,etype,ntype);
    else return NULL;
}

long double trans(double data,int etype,int ntype)
{
    long double n,e,result=0;

    switch(ntype)
    {
        case 0:n=1; break;
        case 1:n=10; break;
        case 2:n=100; break;
        case 3:n=1000; break;
    }

    switch(etype)
    {
        case 0:e=0.0394; break;
        case 1:e=0.00328; break;
        case 2:e=0.0010936; break;
    }

    result=data*n*e;

    return result;
}
