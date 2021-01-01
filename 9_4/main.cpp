#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void encrypt(int length,char *strencrypt,int *add);
void decrypt(int length,char *strdecrypt,int *add);

int main()
{
    int add[7]={8,7,3,4,9,6,2};

    int length;
    string strinput;
    cout<<"Please input plain text:";
    cin>>strinput;
    length=strinput.length();

    const char *str=strinput.data();
    char *strcrypt=new char[length+1];
    for (int i=0;i<length+1;++i)
        strcrypt[i]=str[i];

    encrypt(length,strcrypt,add);
    cout<<"Encrypt:"<<strcrypt<<endl;

    decrypt(length,strcrypt,add);
    cout<<"Decrypt:"<<strcrypt;

    return 0;
}

void encrypt(int length,char *str,int *add)
{
    int temp;
    for (int i=0;i<length;++i)
    {
        temp=str[i];
        temp=str[i]+add[i%7];
        if (temp<32||temp>122) temp%=91;
        str[i]=temp;
    }

}

void decrypt(int length,char *str,int *add)
{
    int temp;
    for (int i=0;i<length;++i)
    {
        temp=str[i];
        temp=str[i]-add[i%7];
        if (temp<32||temp>122) temp+=91;
        str[i]=temp;
    }
}
