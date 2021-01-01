#include <iostream>
#include <cstring>
#include "LongLongInt.h"

using namespace std;

LongLongInt::LongLongInt()
{
    len=0;
    storage=NULL;
}

//LongLongInt::LongLongInt(int l)
//{
//    len=l;
//    storage=new char[len];
//}

LongLongInt::LongLongInt(string &str)
{
    len=str.length();
    storage=new char[len];
    strcpy(storage,str.data());
}

LongLongInt &LongLongInt::operator=(LongLongInt &obj)
{
    if (len==obj.len&&storage==obj.storage) return *this;
    delete []storage;
    len=obj.len;
    storage=new char[len];
    strcpy(storage,obj.storage);

    return *this;
}

ostream &operator<<(ostream &os,const LongLongInt &llt)
{
    os<<llt.storage;
    return os;
}

LongLongInt temp,temp0;
LongLongInt &LongLongInt::operator+(LongLongInt &llt)
{
    LongLongInt *p1,*p2;
    int delta=0,carry=0,sum=0;

    if (len==0&&llt.len==0) return temp;
    if (len==0&&llt.len!=0) return llt;
    if (len!=0&&llt.len==0) return *this;

    if (len<llt.len) {p1=this; p2=&llt;}
    else {p1=&llt; p2=this;}
    temp=*p2;
    delta=p2->len-p1->len;

    for (int i=p1->len-1;i>=0;--i)
    {
        sum=carry;
        sum+=(p1->storage[i]-48)+(p2->storage[i+delta]-48);
        carry=sum/10;
        temp.storage[i+delta]=(sum%10+'0');
    }
    for (int i=p2->len-p1->len-1;i>=0;--i)
    {
        sum=carry;
        sum+=(p2->storage[i]-48);
        carry=sum/10;
        temp.storage[i]=(sum%10+'0');
    }
    if (carry>0)
    {
        int len0=p2->len;
        temp0.len=len0+1;
        delete []temp0.storage;
        temp0.storage=new char [len0+1];
        for (int i=len0;i>0;--i)
        {
            temp0.storage[i]=temp.storage[i-1];
        }
        temp0.storage[0]=carry+'0';
        return temp0;
    }
    return temp;
}
