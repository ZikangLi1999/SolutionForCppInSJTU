#include <iostream>

using namespace std;

int main()
{
    const int LEN=80;
    int count=0;
    char string[LEN]={'\0'};

    cout<<"Please input a string:";
    cin.getline(string,LEN);

    for (int i=0;i<LEN;++i)
    {
        switch (string[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':++count; break;
        }
    }

    cout<<"Count:"<<count;
    return 0;
}
