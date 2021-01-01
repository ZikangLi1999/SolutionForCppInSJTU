//计算1至100之间的素数和
#include <iostream>

using namespace std;

int main()
{
    int num=3,sum=2,count,counter;

    for (;num<=100;++num)
    {
        counter=0;
        for (count=num/2;count>0;--count)
        if (num%count==0) ++counter;
        if (counter==1) sum+=num;
    }
    cout << "The sum-up of the pure number between 1 and 100 is:"<<sum<< endl;
    return 0;
}
