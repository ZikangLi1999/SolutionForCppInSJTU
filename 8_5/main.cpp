#include <iostream>

using namespace std;

int max(int integerArray[],int sizeOfArray,int low,int high);

int main()
{
    int size,low=1,high;
    int *arr=new int [size];

    cout<<"Please input the size of array:";//������������������飬���������û����������С
    cin>>size;
    cout<<"Please input elements of the integer array:";//�˴��������ݵ�Խ�粿����Ч��������������������飬��ɱ���Խ��
    for (int i=0;i<size;++i)
        cin>>arr[i];
    high=size;
    cout<<max(arr,size,low,high);

    return 0;
}

int max(int arr[],int length,int low,int high)
{
    int mid;
    if (length==1) return arr[low-1];
    if (length==2) return arr[high-1]>arr[low-1]?arr[high-1]:arr[low-1];
    mid=(high+low)/2;
    return max(arr,length/2+length%2,low,mid)>max(arr,length/2,mid+1,high)?max(arr,length/2+length%2,low,mid):max(arr,length/2,mid+1,high);
}
