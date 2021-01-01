#include <iostream>
#include "Time.h"
#include "windows.h"

using namespace std;

int main()
{
    int dt;
    Time t1,t2;

    cout<<"Please input time1, time2 (hr:min:sec): ";
    cin>>t1>>t2;

    cout<<"\nPlease input the variation dt (sec): ";
    cin>>dt;

    cout<<"\n{time1+=dt;}\ntime1=";
    t1+=dt;
    cout<<t1;

    cout<<"\n\n{time2-=dt;}\ntime2=";
    t2-=dt;
    cout<<t2;

    cout<<"\n\n{++time1;}\ntime1=";
    ++t1;
    cout<<t1;

    cout<<"\n\n{--time2;}\ntime2=";
    --t2;
    cout<<t2;

    cout<<"\n\ntime1-time2=";
    dt=t1-t2;
    cout<<dt<<endl;

    return 0;
}
