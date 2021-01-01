#include <iostream>

using namespace std;

int main()
{
    int n,b,s,g,m;

    cout << "请输入一个三位整数：" << endl;
    cin>>n;

    g=n%10;
    s=(n-g)%100;
    b=n-s-g;

    m=g*100+s+b/100;

    cout<<"逆转数为："<<m<<endl;

    return 0;
}
