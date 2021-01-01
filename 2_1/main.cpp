//读入两个整型数，计算并输出它们的和，积，商，余数

#include <iostream>

using namespace std;

int main()
{
    int num1,num2;

    cout << "请输入两个整数:" << endl;
    cin>>num1>>num2;

    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    cout<<num1<<"%"<<num2<<"="<<num1%num2<<endl;

    //思考：两个双精度数进行上述运算，不能达到题目要求，其中取模运算只能对整型数据进行。
    return 0;
}
