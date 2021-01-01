#include <iostream>

using namespace std;

template <class T>
T power(T x,int n)
{
    T xn=1;
    if (n==0) return xn;
    else
    {
        if (n>0)
        {
            for (int i=0;i<n;++i) xn*=x;
            return xn;
        }
        else
        {
            for (int i=0;i>n;--i) xn*=x;
            xn=1/xn;
            return xn;
        }
    }
}

int main()
{
    double x;//�˴�main�������������ʹ�����ִ��
    int n;
    cout<<"Please input x:";
    cin>>x;
    cout<<"Please input n:";
    cin>>n;

    cout<<"The power is:"<<power(x,n);

    return 0;
}
