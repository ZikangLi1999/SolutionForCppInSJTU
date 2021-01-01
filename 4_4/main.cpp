#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,num,spaces,print,mid;

    do
    {
        cout << "Please input an odd number of the lines(1-11):";
        cin >>num;
    }while (num<1||num>11||num%2==0);

    mid=(num+1)/2;

    for (i=1;i<=num;++i)
    {
        spaces=fabs(mid-i);
        print=((mid-1)-spaces)*2+1;
        for (int m=1;m<=spaces;++m) cout<<' ';
        for (int n=1;n<=print;++n) cout<<'*';
        cout<<endl;
    }
    return 0;
}
