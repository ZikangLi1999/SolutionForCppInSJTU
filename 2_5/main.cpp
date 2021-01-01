//计算二维平面上两点(x1,y1)和(x2,y2)之间的距离

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,x2,x,y1,y2,y,distence;

    cout << "请输入x1,y1:";
    cin>>x1>>y1;
    cout<<"请输入x2,y2:";
    cin>>x2>>y2;

    x=fabs(x1-x2);//不需要取绝对值
    y=fabs(y1-y2);
    distence=sqrt(pow(x,2)+pow(y,2));

    cout<<'('<<x1<<','<<y1<<")和("<<x2<<','<<y2<<")的距离："<<distence;

    return 0;
}
