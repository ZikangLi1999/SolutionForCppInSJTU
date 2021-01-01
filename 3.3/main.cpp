#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,s,area;

    cout << "Please input the three lenhths(a,b,c)" << endl;
    cin>>a>>b>>c;

    if (a+b>c&&a+c>b&&b+c>a)
    {s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the circle is:"<<fixed<<area<<endl;
    }

    else
    cout<<"They cannot consist a circle"<<endl;

    return 0;
}
