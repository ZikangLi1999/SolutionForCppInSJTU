#include <iostream>
#include "cpu.h"

using namespace std;

CPU::CPU(CPU_Rank r,int f,float v):rank(r),frequency(f),voltage(v)
{
    cout<<"A new CPU created!\n";
}

CPU::~CPU()
{
    cout<<"A CPU deleted!\n";
}

void CPU::run()
{
    char key=' ';
    cout<<"The CPU(P"<<rank<<','<<frequency<<','<<voltage<<") is running..."
        <<"(Press any character to stop the CPU)\n";
    while (key==' ')
    {
        cin>>key;
        if (key!=' ') stop();
    }
}

void CPU::stop()
{
    cout<<"The CPU(P"<<rank<<','<<frequency<<','<<voltage<<") has been stopped.\n";
}
