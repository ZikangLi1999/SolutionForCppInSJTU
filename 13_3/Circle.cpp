#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(double X,double Y,double R):x(X),y(Y),r(R)
{
    cout<<"A new circle ("<<x<<','<<y<<") r="<<r<<" created.\n";
}

Circle::~Circle()
{
    cout<<"\nThe circle has been destructed.\n";
}

void Circle::getO(double &X,double &Y)
{
    X=x;
    Y=y;
    cout<<"The coordinates gotten.\n";
}

void Circle::getR(double &R)
{
    R=r;
    cout<<"The radium gotten.\n";
}

void Circle::setR(double R)
{
    r=R;
    cout<<"The radium set.\n";
}

void Circle::moveTo(double dX,double dY)
{
    x+=dX;
    y+=dY;
    cout<<"The circle moved.\n";
}

void Circle::display()
{
    cout<<"The current coordinates and radium of the circle are:("<<x<<','<<y<<") r="<<r<<endl;
}
