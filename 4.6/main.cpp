#include <iostream>

using namespace std;

int main()
{
    double ex,item=1,i=0,x;

    cout << "Please input the epsilon and x:";
    cin >>x;

    while (item>10e-6)
    {
        ex+=item;
        ++i;
        item*=x/i;
    }
    cout<<ex<<endl;
    return 0;
}
