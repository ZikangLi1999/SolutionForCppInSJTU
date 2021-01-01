//读入一个三位整数num，求出num的百位数字，十位数字和个位数字
#include <iostream>

using namespace std;

int main()
{
    int num,a,b,c;

    cout << "请输入一个三位整数：" << endl;
    cin>>num;

    c=num%10;
    b=(num/10)%10;
    a=num/100;

    cout<<num<<"的百位数字是"<<a<<"，十位数字是"<<b<<"，个位数字是"<<c<<endl;

    return 0;
}
