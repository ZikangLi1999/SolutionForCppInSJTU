#include <iostream>

using namespace std;

int main()
{
    int n,b,s,g,m;

    cout << "������һ����λ������" << endl;
    cin>>n;

    g=n%10;
    s=(n-g)%100;
    b=n-s-g;

    m=g*100+s+b/100;

    cout<<"��ת��Ϊ��"<<m<<endl;

    return 0;
}
