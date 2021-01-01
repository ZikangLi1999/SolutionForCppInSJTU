#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point p1,p2;

    cout<<"Please input the coordinates of p1: ";
    cin>>p1;
    p2=-p1;
    cout<<"The coordinates of p2 is: ";
    cout<<p2;

    return 0;
}
