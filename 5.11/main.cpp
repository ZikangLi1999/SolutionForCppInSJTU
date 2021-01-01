#include <iostream>

using namespace std;

int main()
{
    const int LEN=80;
    char ch[LEN+1]={'\0'};
    char pre=' ';
    int num=0;

    cout<<"Please input the sentence(<80 characters):";
    cin.getline(ch,80);

    for (int i=0;i<LEN;++i)
    {
        if (pre==' '&&ch[i]!=' ') ++num;
        pre=ch[i];
    }
    cout<<"The words number of this sentences is:"<<num;
    return 0;
}
