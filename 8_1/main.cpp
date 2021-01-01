#include <iostream>

using namespace std;

bool isPrime(int integerToJudge);

int main()
{
    int m=1,n=100,count=0;

    cout<<"Please input integers m,n (1<=m,n<=100):";
    do
    {
        if (m<1||n>100||m>n) cout<<"Please reinput the integers m,n(1<=m,n<=100):";
        cin>>m>>n;
    }while(m<1||n>100||m>n);

    for (int i=m;i<=n;++i)
        if (isPrime(i)) ++count;

    cout<<"Count="<<count;

    return 0;
}

bool isPrime(int x)
{
    bool flag=false;
    int counter=0;

    for (int j=1;j<=x;++j)
        if (x%j==0) ++counter;
    if (counter==2) flag=true;

    return flag;
}
