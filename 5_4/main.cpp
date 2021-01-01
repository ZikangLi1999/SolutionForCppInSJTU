#include <iostream>

using namespace std;

int main()
{
    int array[7]={0};
    int n,year=1900,month=0,feb,day=6;

    cout<<"Please input n(0<n<=400):";
    cin>>n;

    for (int y=0;y<n;++y,++year)
    {
        if (year%400==0||(year%4==0&&year%100!=0)) feb=29;
        else feb=28;
        for (int m=1;m<=12;++m)
        {
            day+=month;
            switch (day%7)
            {
                case 0:++array[6]; break;
                case 1:++array[0]; break;
                case 2:++array[1]; break;
                case 3:++array[2]; break;
                case 4:++array[3]; break;
                case 5:++array[4]; break;
                case 6:++array[5]; break;
            }
            switch (m)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:month=31; break;
                case 4:
                case 6:
                case 9:
                case 11:month=30; break;
                case 2:month=feb;
            }
        }
    }

    cout<<"From Monday to Sunday:"<<endl;
    for (int i=0;i<7;++i)
        cout<<array[i]<<' ';

    return 0;
}
