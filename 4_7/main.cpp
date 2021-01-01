#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double unitLength,x1,x2,xmid,fx,area,sum=0;

    do
    {
        cout<< "Please input the unit length you want(0-1):";
        cin >>unitLength;
    }while(unitLength<=0||unitLength>1);

    x1=-unitLength;
    do
    {
        x1+=unitLength;
        x2=x1+unitLength;
        xmid=(x1+x2)/2;
        fx=sqrt(1-pow(xmid,2));
        area=unitLength*fx;
        sum+=area;
    }while (1-x2>=unitLength);

    cout<<"The approximate value of the definite integral of the function "<<endl<<"f(x)=sqrt(1-pow(x,2)) defined on the domain [0,1] at the accuracy of "<<unitLength<<" is:"<<sum<<endl;

    return 0;
}
