#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int array[11]={0};
    int x,y,times;

    cout<<"Please input the times you want:";
    cin>>times;

    srand(time(NULL));

    for (int i=0;i<times;++i)
    {
        x=rand()*6/(RAND_MAX+1)+1;
        y=rand()*6/(RAND_MAX+1)+1;
        if (x+y>=2&&x+y<=12) ++array[x+y-2];
        else cout<<"ERROR!"<<endl;
    }

    cout<<'\t'<<"Sum"<<'\t'<<"Fequency"<<endl;
    for (int i=1;i<=11;++i)
    {
        cout<<'\t'<<i+1<<'\t'<<array[i-1]<<endl;
    }

    return 0;
}
