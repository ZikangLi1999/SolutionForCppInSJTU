#include <iostream>

using namespace std;

int main()
{
    int num,temp,check;
    int array[15]={0};

    cout<<"Please input the number of the array(<15):";//确定规模
    cin>>num;
    cout<<"Please input every number of the array:"<<endl;

    for (int i=0;i<num;++i)//输入数组
    {
        cout<<"Please input the number"<<i+1<<" of the array:";
        cin>>array[i];
    }

    for (int i=0;i<num;++i)//气泡排序法重整数组
    {
        bool flag=false;
        for (int j=0;j<num-1;++j)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=true;
            }
        }
        if (flag==false) break;
    }

    for (int i=0;i<num;++i)//重新输出重整数组
        cout<<array[i]<<'\t';

    cout<<endl<<"Please input the number you want to check:";//输入待查找数据
    cin>>check;

    int low=0,high=num-1,mid;
    while (low<=high)//二分法查找
    {
        mid=(low+high)/2;
        if (array[mid]==check) break;
        else if (array[mid]<check) low=mid+1;
        else high=mid-1;
    }
    if (array[mid]==check) cout<<"Found! The position of the checked number is:"<<mid+1<<endl;
    else cout<<"Not found!"<<endl;

    return 0;
}
