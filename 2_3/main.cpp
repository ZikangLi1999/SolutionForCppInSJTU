//����һ����λ����num�����num�İ�λ���֣�ʮλ���ֺ͸�λ����
#include <iostream>

using namespace std;

int main()
{
    int num,a,b,c;

    cout << "������һ����λ������" << endl;
    cin>>num;

    c=num%10;
    b=(num/10)%10;
    a=num/100;

    cout<<num<<"�İ�λ������"<<a<<"��ʮλ������"<<b<<"����λ������"<<c<<endl;

    return 0;
}
