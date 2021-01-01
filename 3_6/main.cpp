#include <iostream>

using namespace std;

int main()
{
    const float unitPrice90=5.82f,unitPrice93=5.96f,unitPrice97=6.36f,unitPrice0=5.59f;
    float payment,volume,discount,unitPrice;
    char typeOfService;
    int typeOfPetrol;

    cout << "Please choose the type of service(s:self-service,a:assistant-service):" ;
    cin  >> typeOfService;
    cout << "Please choose type of petrol(90,93,97,0):";
    cin  >> typeOfPetrol;
    cout << "Please input the volume of the petrol you need(L):";
    cin  >> volume;

    switch (typeOfService)
    {
        case 'A':
        case 'a':discount=0.97f; break;
        case 'S':
        case 's':discount=0.95f; break;
        default :cout <<"Wrong type of service!"; return 0;//尚未学习循环结构，故直接退出程序，下同
    }

    switch (typeOfPetrol)
    {
        case 90:unitPrice=unitPrice90; break;
        case 93:unitPrice=unitPrice93; break;
        case 97:unitPrice=unitPrice97; break;
        case 0:unitPrice=unitPrice0 ; break;
        default:cout <<"Wrong type of petrol!"; return 0;
    }

    payment=discount*unitPrice*volume;

    cout << "The payment is (yuan):"<<payment<<endl;

    return 0;
}
