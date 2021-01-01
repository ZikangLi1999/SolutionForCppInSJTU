#include <iostream>

using namespace std;

int main()
{
    int m,n;

    cout << "Please input n,m:" ;
    cin>>n>>m;

    /*if ((m-2*n>=0)&&(4*n-m>=0))
        cout <<"chicken(s) : "<<((4*n-m)/2)<<" rabbit(s) : "<<((m-2*n)/2)<<endl;
    else cout<<"No root!"<<endl;*/

    if (m<2*n||m>4*n||m%2!=0)
         cout<<"NO SOLUTION!"<<endl;
    else cout<<"chicken(s):"<<((4*n-m)/2)<<" rabbit(s):"<<((m-2*n)/2)<<endl;

    return 0;
}
