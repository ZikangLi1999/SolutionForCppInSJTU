#include <iostream>

using namespace std;

int main()
{
    int num,a,b,c,d,e;

    cout << "Please input a 5-digit nomber:" ;//�ַ����������ȼ��㺯����δѧϰ�����ڴ˲���λ�����
    cin >>num;

    a=num/10000;
    b=(num-10000*a)/1000;
    c=(num-10000*a-1000*b)/100;
    d=(num-10000*a-1000*b-100*c)/10;
    e=num%10;

    if (a==e&&b==d)
      cout<<"Yes";
    else cout <<"No";

    return 0;
}
