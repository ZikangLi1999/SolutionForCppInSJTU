#include <iostream>

using namespace std;

struct cpx
{
    double a;
    double b;
};

void add(cpx &x,cpx &y,cpx *p);
void mul(cpx &x,cpx &y,cpx *result);
void outp(cpx &x);

int main()
{
    int num,select,x,y;
    cpx result;

    cout<<"Please input the number of complex number to input: ";
    cin>>num;

    cpx *arr=new cpx[num];

    cout<<"\nPlease input a and b of each complex number (a+bi):\n";
    for (int i=0; i<num; ++i) cin>>arr[i].a>>arr[i].b;

    while (true)
    {
        cout<<"\nPlease select an operation:\n"
            <<"1.Addition\n"
            <<"2.Multiplication\n"
            <<"3.Output\n"
            <<"0.Quit\n"
            <<"\nYour selected operation is: ";
        cin>>select;

        if (select<0||select>3) cout<<"\nYour selected operation is wrong!\n";
        if (select==1||select==2)
        {
            cout<<"\nPlease input the index of the 2 complex numbers to be operated(0-"<<num-1<<"): ";
            cin>>x>>y;
        }

        switch (select)
        {
            case 0: return 0;
            case 1: add(arr[x],arr[y],&result);
                    cout<<"\nThe result is: "<<result.a<<'+'<<result.b<<"i\n";
                    break;
            case 2: mul(arr[x],arr[y],&result);
                    cout<<"\nThe result is: "<<result.a<<'+'<<result.b<<"i\n";
                    break;
            case 3: for (int i=0;i<num;++i) outp(arr[i]);
                    break;
        }
    }

    return 0;
}

void add(cpx &x,cpx &y,cpx *result)
{
    result->a=x.a+y.a;
    result->b=x.b+y.b;
    return;
}

void mul(cpx &x,cpx &y,cpx *result)
{
    result->a=x.a*y.a-x.b*y.b;
    result->b=x.b*y.a+x.a*y.b;
    return;
}

void outp(cpx &x)
{
    cout<<x.a<<'+'<<x.b<<"i\n";
    return;
}
