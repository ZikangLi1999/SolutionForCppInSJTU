#include <iostream>

using namespace std;

struct birthday
{
    int yr;
    int mon;
    int day;
};

struct info
{
    char name[21];
    birthday bthd;
    char phone[12];
    char address[51];
};

void sortbyAge(info form[],int n);

int main()
{
    int n;

    cout<<"Please input n(n<10): ";
    cin>>n;

    info *form=new info[n];

    cout<<"\nPlesae input the infomation:\n"
        <<"name\t\tbirthday(Y/M/D)\t\tphone\t\t\taddress\n";
    for (int i=0; i<n; ++i)
    {
        cin>>form[i].name
           >>form[i].bthd.yr >>form[i].bthd.mon >>form[i].bthd.day
           >>form[i].phone
           >>form[i].address;
    }

    sortbyAge (form,n);

    cout<<"\nThe class address book is:\n"
        <<"name\t\tbirthday(Y/M/D)\t\tphone\t\t\taddress\n";
    for (int i=0; i<n; ++i)
    {
        cout<<form[i].name<<"\t\t"
            <<form[i].bthd.yr<<'/'<<form[i].bthd.mon<<'/'<<form[i].bthd.day<<"\t\t"
            <<form[i].phone<<"\t\t"
            <<form[i].address<<'\n';
    }

    return 0;
}

void sortbyAge(info form[],int n)
{
    info p;
    bool flag=false;

    for (int j=0; j<n; ++j)
    {
        flag=false;
        for (int i=0; i<n-1; ++i)
        {
            if (form[i].bthd.yr>form[i+1].bthd.yr)
            {
                p=form[i];
                form[i]=form[i+1];
                form[i+1]=p;
                flag=true;
            }
            if (form[i].bthd.yr==form[i+1].bthd.yr)
            {
                if (form[i].bthd.mon>form[i].bthd.mon)
                {
                    p=form[i];
                    form[i]=form[i+1];
                    form[i+1]=p;
                    flag=true;
                }
                if (form[i].bthd.mon==form[i].bthd.mon)
                {
                    if (form[i].bthd.day>form[i+1].bthd.day)
                    {
                        p=form[i];
                        form[i]=form[i+1];
                        form[i+1]=p;
                        flag=true;
                    }
                }
            }

        }
        if (!flag) break;
    }
}
