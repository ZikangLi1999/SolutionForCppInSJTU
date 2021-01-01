#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num,oddnum,evennum,countnum,temp;
    cout<< "Input a natural number:";
    cin >>num;

    do
    {
        cout<<num<<"->";
        oddnum=0;
        evennum=0;
        for (int i=0;num>0;++i)
        {
            temp=(num%int(pow(10,i+1)))/pow(10,i);
            if (temp%2==0) ++evennum;
            else ++oddnum;
            num-=temp*pow(10,i);
            countnum=i+1;
        }
        num=100*evennum+10*oddnum+countnum;
    }while (num!=123);
    cout<<num<<endl;
    return 0;
}
