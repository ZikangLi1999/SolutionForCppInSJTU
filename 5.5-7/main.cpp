#include <iostream>

using namespace std;

int main()
{
    int num,temp,check;
    int array[15]={0};

    cout<<"Please input the number of the array(<15):";//ȷ����ģ
    cin>>num;
    cout<<"Please input every number of the array:"<<endl;

    for (int i=0;i<num;++i)//��������
    {
        cout<<"Please input the number"<<i+1<<" of the array:";
        cin>>array[i];
    }

    for (int i=0;i<num;++i)//����������������
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

    for (int i=0;i<num;++i)//���������������
        cout<<array[i]<<'\t';

    cout<<endl<<"Please input the number you want to check:";//�������������
    cin>>check;

    int low=0,high=num-1,mid;
    while (low<=high)//���ַ�����
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
