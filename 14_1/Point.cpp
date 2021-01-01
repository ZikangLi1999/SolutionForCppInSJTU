#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(double xi,double yi,double zi):x(xi),y(yi),z(zi)
{

}

istream& operator>>(istream &is,Point &p)
{
    is>>p.x>>p.y>>p.z;
    return is;
}

ostream& operator<<(ostream &os,const Point &p)
{
    os<<'('<<p.x<<','<<p.y<<','<<p.z<<')';
    return os;
}

Point Point::operator-()
{
    this->x=-this->x;
    this->y=-this->y;
    this->z=-this->z;
    return *this;
}
