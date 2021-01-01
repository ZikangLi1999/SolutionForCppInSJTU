#include <iostream>

using namespace std;

int main()
{
    const int coin1=1,coin2=2,coin5=5;
    int k,num1,num2,num5=0,methods=0;

    do
    {
        cout << "Input the change:" ;
        cin >>k;
    }while (k<8||k>=100);

    for (num5=1;num5<=k/coin5;++num5)
    {
        for (num2=1;num2<=(k-num5*coin5)/coin2;++num2)
        {
            for (num1=1;num1<=k-num5*coin5-num2*coin2;++num1)
            if (num1*coin1+num2*coin2+num5*coin5==k) ++methods;
        }
    }

    cout<<"Methods="<<methods;
    return 0;
}
