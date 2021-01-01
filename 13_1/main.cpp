#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time time;
    int hr,min,sec;
    bool flag=true;
    int report=0;

    while (flag)
    {
        switch (report)//Report the error, if it exist
        {
        case 0:
            break;
        case 1:
            cout<<"Inputted min is wrong!\n";
            break;
        case 2:
            cout<<"Inputted sec is wrong!\n";
            break;
        default:
            cout<<"ERROR!\n";
            return 1;
        }

        cout<<"Please input the time (hr/min/sec): ";
        cin>>hr>>min>>sec;

        if (min<0||min>59) report=1;//Check the input value
        else
        {
            if (sec<0||sec>59) report=2;
            else
            {
                report=0;
                flag=false;
            }

        }
    }
    time.setTime(hr,min,sec);
    while (true)
    {
        time.run();
    }
    return 0;
}
