#include <iostream>

using namespace std;

int main()
{
    const float parPrice=1.5f,negotiatedPrice=2.0f,negotiatedStandard=10.0f;//��߳����ά����
    float weightOfWater,actualPrice;

    cout << "Please input the weight of used water(tones):" ;
    cin>>weightOfWater;

    if (weightOfWater>=0)//ȷ��������ˮ����Ϊ����
    {
      if (weightOfWater<=negotiatedStandard)
          actualPrice=parPrice*weightOfWater;
      else
          actualPrice=parPrice*negotiatedStandard+negotiatedPrice*(weightOfWater-negotiatedStandard);

      cout<<"The actual payment of water is(yuan):"<<actualPrice<<endl;
    }
    else cout<<"The inputted weight is wrong!"<<endl;

    return 0;
}
