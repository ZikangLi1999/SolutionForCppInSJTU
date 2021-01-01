#include <iostream>

using namespace std;

int lastCode(int numOfPeople);

int main()
{
    int n;

    cout<<"Please input n:";
    cin>>n;

    cout<<"Last code:"<<lastCode(n);
    return 0;
}

int lastCode(int n)
{
    int *arr=new int[n];
    for (int i=0;i<n;++i)
        arr[i]=0;

    int count=0,k=0;
    bool flag=true;

    for (int i=1;i<4;++i)
    {
        flag=true;
        while (flag)
        {
            if (arr[k]==3)
            {
                if (k==n-1) k=0;
                else ++k;
            }
            else flag=false;
        }
        arr[k]=i;
        if (k==n-1) k=0;
        else ++k;

        if (i==3)
        {
            i=0;
            ++count;
        }
        if (count==n-1)
        {
            for (int i=0;i<n;++i)
            {
                if (arr[i]!=3) return i+1;
            }
        }
    }
    return 0;
}
