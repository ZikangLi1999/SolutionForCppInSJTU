#include <iostream>

using namespace std;

bool perfectNumber(int numberToCheck);

int main()
{
    int m=1,n=10000;

    do{
        cout<<"Please input integers m,n (1<=m,n<=10000):";
        cin>>m>>n;
    }while (m<1||n>10000||m>n);

    cout<<"Perfect number in ["<<m<<','<<n<<"]:";
    for (int i=m;i<=n;++i)
        if (perfectNumber(i)) cout<<i<<' ';

    return 0;
}

bool perfectNumber(int x)
{
    bool flag=false;
    int sum=0;

    for (int t=1;t<x;++t)
        if (x%t==0) sum+=t;
    if (sum==x) flag=true;

    return flag;
}
