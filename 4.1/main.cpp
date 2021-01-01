#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float rate1=0.025f,rate2=0.028f,currentRate=0.012f;
    float rate,balance,intrest;
    int num,startDate,endDate,typeRate;

    cout << "Please input the number of the customenrs:";
    cin >>num;

    for (int i=1;i<=num;++i)
    {
        cout<<"Please input the span of the deposit(0,1,2):(year(s))";
        cin >>typeRate;
        cout<<"Please input the balnce:(dollar(s))";
        cin >>balance;
        cout<<"Please input the start year and the end year:(year)";
        cin >>startDate>>endDate;

        switch (typeRate)
        {
            case 0:rate=currentRate;
            case 1:rate=rate1;
            case 2:rate=rate2;
        }
        intrest=balance*pow(1+rate,endDate-startDate)-balance;

        cout<<"The customer "<<i<<"'s intrest is:(dollars)"<<intrest<<endl;
    }
    return 0;
}
