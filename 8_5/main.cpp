#include <iostream>

using namespace std;

int max(int integerArray[],int sizeOfArray,int low,int high);

int main()
{
    int size,low=1,high;
    int *arr=new int [size];

    cout<<"Please input the size of array:";//若由其他程序给出数组，则无需由用户输入数组大小
    cin>>size;
    cout<<"Please input elements of the integer array:";//此处输入数据的越界部分无效，若由其他程序给出数组，则可避免越界
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
