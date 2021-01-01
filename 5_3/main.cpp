#include <iostream>

using namespace std;

int main()
{
    bool array[999]={false};
    int n,k;

    cout<<"Please input n,k(k<=n<=1000):";
    cin>>n>>k;

    for (int i=1;i<=k;++i)
    {
        for (int j=i;j<=n;j+=i)
            array[j-1]=!array[j-1];
    }

    for (int i=0;i<n;++i)
        if (array[i]==true) cout<<i+1<<' ';
    return 0;
}
