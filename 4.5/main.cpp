//检查输入是否为素数
#include <iostream>

using namespace std;

int main()
{
    int num,check,count=0;

    cout << "Please input a number you want to check:";
    cin >>num;

    for (check=num/2;check>0;--check)
    {
        if (num%check==0)
          ++count;
    }
    if (count==1) cout<<"Yes!"<<endl;
    else cout<<"No!"<<endl;

    return 0;
}
