#include <iostream>

using namespace std;

int main()
{
    int i,item=1,sum=0;

    for (i=1;i<=10;++i)
    {
        item*=i;
        sum+=item;
    }
    cout<<"The result is:"<<sum<<endl;
    return 0;
}
