#include <iostream>

using namespace std;

int search(int *arr,int n,int key);

int main()
{
    int n,key,*arr;

    cout<<"Please input n:";
    cin>>n;
    arr=new int[n];

    cout<<"Please input "<<n<<" integers:";
    for (int i=0;i<n;++i)
        cin>>arr[i];

    cout<<"Please input key:";
    cin>>key;

    if (search(arr,n,key)!=-1)
        cout<<"Index="<<search(arr,n,key);
    else cout<<"Not Found";

    return 0;
}

int search(int *arr,int n,int key)
{
    int index=-1;

    for (int i=0;i<n;++i)
        if (arr[i]==key) index=i;//此处index仅保存最后一个值为key的元素的下标，故数组arr中各元素互不相同为宜

    return index;
}
