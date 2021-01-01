#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3;

    cout << "Please input the coordinates of the 3 points on 2 dimensional plane (x1,y1),(x2,y2),(x3,y3)" ;
    cout <<endl<<"x1,y1:";
    cin  >>x1>>y1;
    cout <<"x2,y2:";
    cin  >>x2>>y2;
    cout <<"x3,y3:";
    cin  >>x3>>y3;

    /*if ((x1!=x2)&&(x1!=x3)&&(x2!=x3))*/  //浮点数的不精确性导致数据丢失，因不能直接用等号判定相等，需使用差小于10e-6判定
    if (fabs(x1-x2)>10e-6&&fabs(x1-x3)>10e-6&&fabs(x2-x3)>10e-6)
    {
        if (fabs(((y1-y2)/(x1-x2))-((y2-y3)/(x2-x3))<10e-6))
        cout<<"Yes";
        else cout<<"No";
    }
    else
    {
        if (fabs(x1-x2)<10e-6&&fabs(x2==x3)<10e-6)
        cout <<"Yes";
        else cout <<"No";
    }

    return 0;
}
