//求输入的四个整型数的平均值

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    double average;

    cout << "请输入四个整型数：" << endl;
    cin>>a>>b>>c>>d;

    average=(a+b+c+d)/4.0;

    cout<<a<<" "<<b<<" "<<c<<" "<<d<<"的平均值是："<<average;

    return 0;
}
