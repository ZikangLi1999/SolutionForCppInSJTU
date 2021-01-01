#include <iostream>
#include <cstring>

using namespace std;

void inputJdate(int *jyear,int *jday);
char *transferDate(int julianYear,int julianDay,char *date);

int main()
{
    int jyear,jday;
    char date[6]={0};
    bool flag=false;

    inputJdate(&jyear,&jday);

    if (transferDate(jyear,jday,date)!=NULL) cout<<"The transferred date is:"<<date<<endl;
    else flag=true;

    while (flag)
    {
        cout<<"\nThe date inputted is wrong!\n";
        inputJdate(&jyear,&jday);
        if (transferDate(jyear,jday,date)!=NULL)
        {
            flag=false;
            cout<<"The transferred date is:"<<date<<endl;
        }
    }
    return 0;
}

void inputJdate(int *jyear,int *jday)
{
    cout<<"Please input the year and day of Julian calendar:";
    cin>>*jyear>>*jday;
}

char *transferDate(int year,int day,char *date)
{
    int month=0,sum=365;
    int numday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char cday[3];

    if (year%400==0||(year%4==0&&year%100!=0)) {numday[1]=29; ++sum;}

    if (day>sum) return NULL;

    while (day>numday[month])
    {
        day-=numday[month];
        ++month;
    }
    switch (month)
    {
        case 0:strncat(date,"Jan",3);break;
        case 1:strncat(date,"Feb",3);break;
        case 2:strncat(date,"Mar",3);break;
        case 3:strncat(date,"Apr",3);break;
        case 4:strncat(date,"May",3);break;
        case 5:strncat(date,"Jun",3);break;
        case 6:strncat(date,"Jul",3);break;
        case 7:strncat(date,"Aug",3);break;
        case 8:strncat(date,"Sep",3);break;
        case 9:strncat(date,"Oct",3);break;
        case 10:strncat(date,"Nov",3);break;
        case 11:strncat(date,"Dec",3);break;
    }
    if (day>9)
    {
        cday[0]='0'+day/10;
        cday[1]='0'+day%10;
        cday[2]='\0';
    }
    else
    {
        cday[0]='0'+day;
        cday[1]='\0';
    }
    strncat(date,cday,3);

    return date;
}
