//�����άƽ��������(x1,y1)��(x2,y2)֮��ľ���

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,x2,x,y1,y2,y,distence;

    cout << "������x1,y1:";
    cin>>x1>>y1;
    cout<<"������x2,y2:";
    cin>>x2>>y2;

    x=fabs(x1-x2);//����Ҫȡ����ֵ
    y=fabs(y1-y2);
    distence=sqrt(pow(x,2)+pow(y,2));

    cout<<'('<<x1<<','<<y1<<")��("<<x2<<','<<y2<<")�ľ��룺"<<distence;

    return 0;
}
