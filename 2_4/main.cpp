//����һ����λ���֣�������ܺ����

#include <iostream>

using namespace std;

int main()
{
    int num;
    char a,b,c,d;
    cout << "������һ����λ����" << endl;
    cin>>num;

    d=num%10;
    c=(num-d)/10%10;
    b=(num-10*c-d)/100%10;
    a=(num-100*b-10*c-d)/1000;

    d=d+13+64;
    c=c+13+64;
    b=b+13+64;
    a=a+13+64;

    cout<<"���������"<<a<<b<<c<<d;

    return 0;
}
