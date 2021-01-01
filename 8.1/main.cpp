//输入、输出、修改两点坐标，及计算两点间距离

#include <iostream>
#include <cmath>

using namespace std;

    struct coordinate
    {
        double x;
        double y;
    } p1,p2;

void output(coordinate &p1,coordinate &p2);
void revise(coordinate &p1,coordinate &p2);
void calculate(coordinate &p1,coordinate &p2);

int main()
{
    int select;
    void (*function[4])(coordinate &p1,coordinate &p2)= {NULL,output,revise,calculate};

    cout<<"Please input the coordinate of the 2 points:\n";
    cin>>p1.x>>p1.y>>p2.x>>p2.y;

    while (true)
    {
        cout<<"\nPlease choose the operation you want:\n"
            <<"1.Output the coordinte of selected point\n"
            <<"2.Revise the coordinat of selected point\n"
            <<"3.Calculat the distance of the 2 points\n"
            <<"0.Quit\n\n"
            <<"The opertion you want is: ";
        cin>>select;

        if (select==0) return 0;
        else if (select>3)
        {
            cout<<"\nInput Error!\n\n";
            continue;
        }
        else function[select](p1,p2);
    }

    return 0;
}

void output(coordinate &p1,coordinate &p2)
{
    int p;
    cout<<"Please input the point you want to output (1 or 2):";
    cin>>p;
    switch (p)
    {
        case 1:cout<<"The coordinate of p1 is:\n"
                   <<'('<<p1.x<<','<<p1.y<<")\n";break;
        case 2:cout<<"The coordinate of p2 is:\n"
                   <<'('<<p2.x<<','<<p2.y<<")\n";break;
        default:cout<<"ERROR!";
    }
    return;
}

void revise(coordinate &p1,coordinate &p2)
{
    int p;
    cout<<"Please input the point you want to revise (1 or 2):";
    cin>>p;
    switch (p)
    {
        case 1:cout<<"Please input the coordinate of p1:\n";
               cin>>p1.x>>p1.y;
               break;
        case 2:cout<<"Please input the coordinate of p2:\n";
               cin>>p2.x>>p2.y;
               break;
        default:cout<<"\nERROR!\n\n";
    }
    return;
}

void calculate(coordinate &p1,coordinate &p2)
{
    double distance;
    distance=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    cout<<"The distance of p1 and p2 is: "<<distance<<endl;
    return;
}
