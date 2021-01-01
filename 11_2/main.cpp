#include <iostream>
#include <windows.h>

using namespace std;

struct eclock
{
    int hr;
    int min;
    int sec;
} etime;

void setTime();
void increase();
void showTime();

int main()
{
    setTime();

    while (true)
    {
        increase();
        showTime();
    }

    return 0;
}

void setTime()
{
    cout<<"Please set the hr/min/sec of the clock:\n";
    cin>>etime.hr>>etime.min>>etime.sec;
    if (etime.hr<0||etime.min<0||etime.min>59||etime.sec<0||etime.sec>59)
    {
        cout<<"\nInput Error!\n";
        setTime();
    }
    return;
}

void increase()
{
    Sleep(100);
    if (etime.sec<59) ++etime.sec;
    else
    {
        etime.sec=0;
        if (etime.min<59) ++etime.min;
        else
        {
            etime.min=0;
            ++etime.hr;
        }
    }
    return;
}

void showTime()
{
    cout<<"The current time is: "<<etime.hr<<':'<<etime.min<<':'<<etime.sec<<endl;
    return;
}
