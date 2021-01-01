#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{
    double x,y,a,b,c;

    cout<<"In this program, you are supposed to input four numbers which are all of type 'double',standing for:\n"
        <<"\nTriangle:\tx,y,sideLength1,sideLength2,sideLength3"
        <<"\nRectangle:\tx,y,width,height,NULL"
        <<"\nSquare: \tx,y,sideLength,NULL,NULL"
        <<"\nEllipse:\tx,y,semi-MajorAxis,semi-MinorAxis,NULL"
        <<"\nCircle: \tx,y,radius,NULL,NULL"
        <<"\n\nPlease input four numbers (double):";
    cin>>x>>y>>a>>b>>c;

    Triangle trag(x,y,a,b,c);
    Rectangle rctg(x,y,a,b);
    Square sq(x,y,a);
    Ellipse elps(x,y,a,b);
    Circle circ(x,y,a);

    cout<<"\nThe areas of the derived shapes are:\n"
        <<"\nTriangle:\t"<<trag.getArea()
        <<"\nRectangle:\t"<<rctg.getArea()
        <<"\nSquare: \t"<<sq.getArea()
        <<"\nEllipse:\t"<<elps.getArea()
        <<"\nCircle: \t"<<circ.getArea()<<endl;
    return 0;
}
