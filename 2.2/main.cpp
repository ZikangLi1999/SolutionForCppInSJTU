#include <iostream>

using namespace std;

int main()
{
    double fahr,celsius;

    cout << "请输入华氏度：" << endl;
    cin>>fahr;

    celsius=5.0/9.0*(fahr-32);

    cout<<"对应的摄氏度为："<<celsius;

    return 0;
}
