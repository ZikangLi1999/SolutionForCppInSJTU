#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    double x,y,r,X,Y,R,dX,dY;

    cout<<"Please input the coordinates(x,y) and radium(r) of the circle: ";
    cin>>x>>y>>r;
    Circle circle(x,y,r);

    //Show the fuction:getO
    cout<<"\nFunction: getO\n";
    circle.getO(X,Y);
    cout<<"The gotten coordinates are:("<<X<<','<<Y<<")\n";

    //Show the fuction:getR
    cout<<"\nFunction: getR\n";
    circle.getR(R);
    cout<<"The gotten radium is: r="<<R<<endl;

    //Show the function:setR
    cout<<"\nFunciton: setR\n"
        <<"Please input the new radium: ";
    cin>>r;
    circle.setR(r);
    cout<<"The new radium is: r="<<r<<endl;

    //Show the function:moveTo
    cout<<"\nFunction: moveTo\n"
        <<"Please input deltaX,deltaY: ";
    cin>>dX>>dY;
    circle.moveTo(dX,dY);

    //Show the function:display
    cout<<"\nFunction: display\n";
    circle.display();

    return 0;
}
