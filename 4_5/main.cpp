#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b,num1,num2,num3,input1,input2,input3;

    do
    {
        srand(time(NULL));
        num1=rand()*10/(RAND_MAX+1);
        num2=rand()*10/(RAND_MAX+1);
        num3=rand()*10/(RAND_MAX+1);
    }while(num1==num2||num1==num3||num2==num3);

    for(int i=7;i>0;--i)
    {
        a=0;
        b=0;

        cout<<"Please input the numbers you guess("<<i<<" time(s) chance(s) left):";
        cin >>input1>>input2>>input3;

        if (input1==num1&&input2==num2&&input3==num3)
        {
            cout<<"Congratulations!You are rignt!"<<endl;
            return 0;
        }

        if (input1==num1) ++a;
        if (input2==num2) ++a;
        if (input3==num3) ++a;

        if (input1==num2||input1==num3) ++b;
        if (input2==num1||input2==num3) ++b;
        if (input3==num1||input3==num2) ++b;

        cout<<a<<'A'<<b<<'B'<<endl;
    }
    cout<<"Sorry!You have not guess out the right numbers in given chances.The answer is:"<<num1<<num2<<num3<<endl;
    return 0;
}
