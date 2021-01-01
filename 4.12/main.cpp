//Çó½×ÌÝ½×Êý
#include <iostream>

using namespace std;

int main()
{
    int num;

    for (num=7;;++num)
    {
        if (num%7!=0) continue;
        if (num%6!=5) continue;
        if (num%5!=4) continue;
        if (num%3!=2) continue;
        if (num%2!=1) continue;
        cout<<num;
        break;
    }
    return 0;
}
