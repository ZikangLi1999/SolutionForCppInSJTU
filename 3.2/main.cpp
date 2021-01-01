//统计学生成绩
#include <iostream>

using namespace std;

int main()
{
    int num=1,max=0,min=100,value;
    double sum=0;

    while(true)
    {
        cout<<"Please input the grade of the student "<<num<<":";
        cin >>value;
        if (value==-1) break;
        ++num;
        sum+=value;
        if (value<min) min=value;
        if (value>max) max=value;
    }

    value=sum/num;

    cout<<"The average grade of the "<<num<<"students is:"<<value<<endl;

    return 0;
}
