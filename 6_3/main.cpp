#include <iostream>

using namespace std;

int main()
{
    const int LEN=80;
    bool flag=false;
    char temp;
    char string[LEN]={'\0'};

    cout<<"Please input a string:";
    cin.getline(string,LEN);

    for (int i=0;i<LEN;++i)
    {
        for (int j=0;j<i;++j)
        {
            if (string[i]==string[j])
            {
                for (int k=i;k<LEN;++k) string[k]=string[k+1];
            }
        }
    }

    for (int m=0;m<LEN&&string[m]!='\0';++m)
    {
        for (int n=0;n<LEN-1&&string[n]!='\0';++n)
        {
            flag=false;
            if ((int)string[n]<(int)string[n+1])
            {
                temp=string[n];
                string[n]=string[n+1];
                string[n+1]=temp;
                flag=true;
            }
        }
        if (flag) break;
    }

    cout<<string;
    return 0;
}
