//枚举法求ABCDE的值,使得ABCD*E=DCBA
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,num1,num2;

    for (a=1;a<=9;++a)
    {
        for (b=1;b<=9;++b)
        {
            if (b==a) continue;
            for (c=1;c<=9;++c)
            {
                if (c==a||c==b) continue;
                for (d=1;d<=9;++d)
                {
                    if (d==a||d==b||d==c) continue;
                    for (e=1;e<=9;++e)
                    {
                        if (e==a||e==b||e==c||e==d) continue;
                        num1=1000*a+100*b+10*c+d;
                        num2=1000*d+100*c+10*b+a;
                        if (num1*e==num2) cout<<num1<<'*'<<e<<'='<<num2<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
