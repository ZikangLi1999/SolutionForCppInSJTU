#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Please input n:";
    cin>>n;
    int *array=new int[n];
    cout<<"Please input 5 integers:";
    for (int i=0;i<n;++i)
    {
        cin>>array[i];
    }

    int temp;
    bool flag=true;
    for (int i=1;true;++i)
    {
        flag=true;
        for (int j=0;j<n;++j)
        {
            if (array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=false;
            }
        }
        if (flag) break;
    }
    for (int i=0;i<n;++i)
    {
        cout<<array[i]<<' ';
    }

    return 0;
}
