#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Please input a letter:" ;
    cin>>ch;

    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))//避免用case语句列举辅音字母的繁琐性和易遗漏性
    {
      switch (ch)
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
        case 'u':cout<<"Vowel"<<endl; break;
        default:cout<<"Consonant"<<endl;
      }
    }
    else cout<<"It is not an English letter!"<<endl;
    return 0;
}
