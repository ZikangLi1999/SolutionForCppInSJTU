#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(int hr,int min,int sec):hour(hr),minute(min),second(sec)
{

}

void Time::regu()
{
    if (second>59)
    {
        minute+=(second/60);
        second%=60;
        if (minute>59)
        {
            hour+=(minute/60);
            minute%=60;
        }
    }

    if (second<0)
    {
        if (second%60)
        {
            minute+=(second/60-1);
            second=(60+second%60);
        }
        else
        {
            minute+=(second/60);
            second=(second%60);
        }
        if (minute<0)
        {
            hour+=(minute/60-1);
            minute=(60+minute%60);
        }
    }
    return;
}

Time Time::operator+=(int delta)
{
    second+=delta;
    regu();

    return *this;
}

Time Time::operator-=(int delta)
{
    second-=delta;
    regu();

    return *this;
}

Time Time::operator++()
{
    ++second;
    regu();

    return *this;
}

Time Time::operator++(int i)
{
    Time temp(hour,minute,second);
    ++second;
    regu();

    return temp;
}

Time Time::operator--()
{
    --second;
    regu();

    return *this;
}

Time Time::operator--(int i)
{
    Time temp(hour,minute,second);
    --second;
    regu();

    return temp;
}

int Time::operator-(const Time &t)
{
    const Time *pr1,*pr2;
    int hr,min,sec;

    if (hour>=t.hour)
    {
        pr1=this;
        pr2=&t;
    }
    else
    {
        pr1=&t;
        pr2=this;
    }
    hr=pr1->hour-pr2->hour;
    if (pr1->minute>=pr2->minute)
    {
        min=pr1->minute-pr2->minute;
        if (pr1->second>=pr2->second)
        {
            sec=pr1->second-pr2->second;
        }
        else
        {
            --min;
            sec=60+pr1->second-pr2->second;
        }
    }
    else
    {
        --hr;
        min=60+pr1->minute-pr2->minute;
        if (pr1->second>=pr2->second)
        {
            sec=pr1->second-pr2->second;
        }
        else
        {
            --min;
            sec=60+pr1->second-pr2->second;
        }
    }
    return (3600*hr+60*min+sec);
}

ostream &operator<<(ostream &os,Time &t)
{
    os<<t.hour<<':'<<t.minute<<':'<<t.second;
    return os;
}

istream &operator>>(istream &is,Time &t)
{
    is>>t.hour>>t.minute>>t.second;
    return is;
}
