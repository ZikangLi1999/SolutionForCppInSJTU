#include <iostream>
#include "Time.h"
#include "windows.h"

using namespace std;

void Time::setTime(int h,int m,int s)
{
    hr=h;
    min=m;
    sec=s;
    return;
}

void Time::showTime()
{
    cout<<"Current time is: "<<hr<<':'<<min<<':'<<sec<<endl;
    return;
}

void Time::run()
{
    Sleep(1000);
    ++sec;
    if (sec>59)
    {
        if (min<59)
        {
            ++min;
            sec=0;
        }
        else
        {
            ++hr;
            min=0;
            sec=0;
        }
    }
    showTime();
}
