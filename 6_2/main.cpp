#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int LEN=80;
    int index=-1;
    char ch;
    char string[LEN]={'\0'};

    cout<<"Please input a string:";
    cin.getline(string,LEN,'\n');
    cout<<"Please input a character:";
    cin>>ch;

    for (int i=0;i<LEN;++i)
    {
        if (string[i]==ch) index=i;
    }
    if (index!=-1) cout<<"Index:"<<index;
    else cout<<"Not Found";
    return 0;
}
