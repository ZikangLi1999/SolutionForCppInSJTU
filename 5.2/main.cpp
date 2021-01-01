#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    double sum=0,average=0;
    int intarray[55]={0};

    cout<<"Please input the number of students(<55):";
    cin>>num;

    for (int i=0;i<num;++i)
    {
        cout<<"Please input the grade of student"<<i+1<<":";
        cin>>intarray[i];
        average+=intarray[i];
    }

    average=average/num;

    for (int i=0;i<num;++i)
        sum+=pow(intarray[i]-average,2);
    sum=sqrt(sum/num);

    for (int i=0;i<num;++i)
        cout<<intarray[i]<<'\t';
    cout<<endl<<"The average is:"<<average<<" and the variance is:"<<sum<<endl;

    return 0;
}
