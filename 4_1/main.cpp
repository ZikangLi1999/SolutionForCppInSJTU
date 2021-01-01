#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,n,i,x=0,sum=0;

    cout << "Input a,n:";
    cin >>a>>n;

    for(i=0;i<n;++i)
    {
        x+=a*pow(10,i);
        sum+=x;
    }

    cout<<"Sum="<<sum;

    return 0;
}
