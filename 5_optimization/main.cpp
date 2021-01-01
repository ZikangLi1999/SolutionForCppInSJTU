#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int way=1,exer=1,ctrlop=0,ctrlloop=0,encg=0,num1,num2,op,result1,result2,sum1=0,sum2=0;
    int history[100][3]={{0}};                                      //保存出题历史
    int count1[4]={0},count2[4]={0};                                  //计数
    bool historyflag=false,exerflag=true,ctrlflag=false;
    char ch;

    cout<<"********************Welcome to the kingdom of math,little knight!********************\n\n                                      Are you ready?\n\n";//界面优化，下同
    cout<<"Please choose the way of setting the number of the questions (1:finite,others:infinite):";
    cin>>way;
    if (way==1)
    {
        cout<<"Please input the number of the questions you want:";
        cin>>exer;
        cout<<"\n                                        Les`s Go!\n\n";
    }
    else
    {
        cout<<"Tips:Please input -1 to finish exercise when needing.\n\n                                        Les`s Go!\n\n";
    }

    srand(time(NULL));
    int i;
    for (i=1;exerflag;++i)
    {
        do
        {
          historyflag=false;

          num1=rand()*10/(RAND_MAX+1)+1;
          num2=rand()*10/(RAND_MAX+1)+1;
          op=rand()*4/(RAND_MAX+1);

          if (ctrlflag&&i-ctrlloop>=10) ctrlop=0;
          if (i>=6&&ctrlop<5)                               //自第6题起开始修正，错得多的出得多（？）
          {
              if (count2[0]-count1[0]>count2[1]+count2[2]+count2[3]-count1[1]-count1[2]-count1[3]) op=0;
              if (count2[1]-count1[1]>count2[0]+count2[2]+count2[3]-count1[0]-count1[2]-count1[3]) op=1;
              if (count2[2]-count1[2]>count2[1]+count2[0]+count2[3]-count1[1]-count1[0]-count1[3]) op=2;
              if (count2[3]-count1[3]>count2[1]+count2[2]+count2[0]-count1[1]-count1[2]-count1[0]) op=3;
              if (op==history[i-2][2]) {++ctrlop; ctrlloop=i; ctrlflag=true;}
          }

          for (int j=0;j<100;++j)
          {
              if (num1==history[j][0]&&num2==history[j][1]&&op==history[j][2]) historyflag=true;
          }
        }
        while ((num1-num2<0)||num2==0||historyflag);                        //避免负差 除数为零 重复

        history[i-1][0]=num1;
        history[i-1][1]=num2;
        history[i-1][2]=op;

        switch (op)
        {
            case 0:ch='$'; break;
            case 1:ch='#'; break;
            case 2:ch='@'; break;
            case 3:ch='&'; break;
        }
        for (int look=0;look<85;++look) cout<<ch;
        cout<<"\n\n                                      Question NO."<<i<<endl<<"                                          ";

        switch(op)
        {
        case 0:cout<<num1<<"+"<<num2<<"=";
               cin>>result1;
               if (result1==-1) break;
               if (num1+num2==result1)
               {cout<<"                             Congratulations!You are right!\n\n"; ++count1[0]; ++encg;}
               else {cout<<"                                  Sorry!You are wrong!\n\n"; ++count2[0]; encg=0;}
               break;
        case 1:cout<<num1<<"-"<<num2<<"=";
               cin>>result1;
               if (result1==-1) break;
               if (num1-num2==result1)
               {cout<<"                             Congratulations!You are right!\n\n"; ++count1[1]; ++encg;}
               else {cout<<"                                  Sorry!You are wrong!\n\n"; ++count2[1]; encg=0;}
               break;
        case 2:cout<<num1<<"*"<<num2<<"=";
               cin>>result1;
               if (result1==-1) break;
               if (num1*num2==result1)
               {cout<<"                             Congratulations!You are right!\n\n"; ++count1[2]; ++encg;}
               else {cout<<"                                  Sorry!You are wrong!\n\n"; ++count2[2]; encg=0;}
               break;
        case 3:cout<<num1<<"/"<<num2<<"=";
               cin>>result1;
               if (result1==-1) break;
               cout<<"                                       remainder=";
               cin>>result2;
               if ((num1/num2==result1)&&(num1%num2==result2))
               {cout<<"                             Congratulations!You are right!\n\n"; ++count1[3]; ++encg;}
               else {cout<<"                                  Sorry!You are wrong!\n\n"; ++count2[3]; encg=0;}
               break;
        }
        switch (encg)
        {
            case 0:
            case 1:break;
            case 2:cout<<"                                  >>>>>  Double Kill!  <<<<<\n\n";break;
            case 3:cout<<"                                  >>>>>  Triple Kill!  <<<<<\n\n";break;
            case 4:cout<<"                                 >>>>>  Quadruple Kill!  <<<<<\n\n";break;
            case 5:cout<<"                                >>>>>   Quintuple Kill!  <<<<<\n\n";break;
            default:cout<<"                                 >>>>>   Ledendary!  <<<<<\n\n";break;
        }
        if (way==1)
        {
            if (i>=exer||i>=100) exerflag=false;
        }
        else if (result1==-1||i>=100) exerflag=false;
    }

    for (int m=0;m<4;++m) sum1+=count1[m];
    for (int n=0;n<4;++n) sum2+=count2[n];
    for (int look=0;look<85;++look) cout<<'*';
    cout<<"\n                                     Right:"<<sum1<<" Wrong:"<<sum2<<endl;
    for (int look=0;look<85;++look) cout<<'*';
    return 0;
}
