#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int way,exer,num1,num2,op,result1,result2,sum1=0,sum2=0;
    int history[10000][3]={{0}};                                      //保存出题历史
    int count1[4]={0},count2[4]={0};                                  //计数
    bool historyflag=false,exerflag=true;

    cout<<"Please choose the way of setting the number of the quizs(0:infinite,1:finite):";
    do
    {
        cin>>way;
    }while (way!=0||way!=1);
    if (way==1)
    {
        cout<<"Please input the number of the quizs you want:";
        cin>>exer;
    }
    else
    {
        cout<<"Please input -1 to finish when needing.";
    }

    srand(time(NULL));
    for (int i=1;exerflag;++i)
    {
        do
        {
          num1=rand()*10/(RAND_MAX+1);
          num2=rand()*10/(RAND_MAX+1);
          op=rand()*4/(RAND_MAX+1);
          if (count2[0]>count2[1]+count2[2]+count2[3]) op=0;
          if (count2[1]>count2[0]+count2[2]+count2[3]) op=1;
          if (count2[2]>count2[1]+count2[0]+count2[3]) op=2;
          if (count2[3]>count2[1]+count2[2]+count2[0]) op=3;
          for (int j=0;j<i;++j)
          {
              if (num1==history[j][0]||num2==history[j][1]||op==history[j][2])
              historyflag=true;
          }
        }
        while ((num1-num2<0)||num2==0||historyflag);                        //避免负差 除数为零 重复

        history[i-1][0]=num1;
        history[i-1][1]=num2;
        history[i-1][2]=op;

        cout<<"Question NO."<<i<<endl;
        switch(op)
        {
        case 0:cout<<num1<<"+"<<num2<<"=";
               cin>>result1;
               if (result1==-1) {i=exer+1; break;}
               if (num1+num2==result1)
               {cout<<"You are right!\n"; ++count1[0];}
               else {cout<<"You are wrong!\n"; ++count2[0];}
               break;
        case 1:cout<<num1<<"-"<<num2<<"=";
               cin>>result1;
               if (result1==-1) {i=exer+1; break;}
               if (num1-num2==result1)
               {cout<<"You are right!\n"; ++count1[1];}
               else {cout<<"You are wrong!\n"; ++count2[1];}
               break;
        case 2:cout<<num1<<"*"<<num2<<"=";
               cin>>result1;
               if (result1==-1) {i=exer+1; break;}
               if (num1*num2==result1)
               {cout<<"You are right!\n"; ++count1[2];}
               else {cout<<"You are wrong!\n"; ++count2[2];}
               break;
        case 3:cout<<num1<<"/"<<num2<<"=";
               cin>>result1;
               if (result1==-1) {i=exer+1; break;}
               cout<<"remainder=";
               cin>>result2;
               if ((num1/num2==result1)&&(num1%num2==result2))
               {cout<<"You are right!\n"; ++count1[3];}
               else {cout<<"You are wrong!\n"; ++count2[3];}
               break;
        default:cout<<"ERROR!"<<endl;
        }
        if (way==1)
        {
            if (i>=exer) exerflag=false;
        }
    }

    for (int i=0;i<4;++i) sum1+=count1[i];
    for (int i=0;i<4;++i) sum2+=count2[i];
    cout<<"Right:"<<sum1<<" Wrong:"<<sum2<<endl;
    return 0;
}
