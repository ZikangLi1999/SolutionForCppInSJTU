#include <iostream>
#include "cpu.h"

using namespace std;

int main()
{
    int r,f;
    float v;
    bool check=false;

    do
    {
        if (check==true)
        {
            cout<<"Inputted rank is wrong!\n";
            check=false;
        }
        cout<<"Please input the parameters of each CPU:\n"
            <<"(You are supposed to input rank(from 1 to 7), frequency and voltage)\n";
        cin>>r>>f>>v;
        if (r<1||r>7) check=true;
    }while (check);

    CPU cpu((CPU_Rank)r,f,v);
    cpu.run();

    return 0;
}
