//µ¥Á´±íÊ¾Àý
#include <iostream>

using namespace std;

    struct linkrec
    {
        int data;
        linkrec *next;
    };

void outp(linkrec *head);
void sum(linkrec *head);

int main()
{
    int temp,select;
    linkrec *head,*rear,*p;

    head=rear=new linkrec;

    cout<<"Please input data continously, input '0' to falt:";
    while (true)
    {
        cin>>temp;
        if (temp==0) break;
        else
        {
            p=new linkrec;
            p->data=temp;
            rear->next=p;
            rear=p;
        }
    }

    rear->next=NULL;

    cout<<"\nPlease input the operation you want:\n"
    <<"1.Output the link one by one\n"
    <<"2.Summarize the data of all link note\n"
    <<"0.Quit\n"
    <<"The opertion you select is: ";
    cin>>select;

    switch(select)
    {
        case 0:return 0;
        case 1:outp(head); break;
        case 2:sum(head); break;
    }
    return 0;
}

void outp(linkrec *head)
{
    linkrec *p=head->next;

    while (true)
    {
        if (p!=NULL)
        {
            cout<<p->data<<'\t';
            p=p->next;
        }
        else break;
    }
    return;
}

void sum(linkrec *head)
{
    linkrec *p=head->next;
    int sum=0;

    while (true)
    {
        if (p!=NULL)
        {
            sum+=p->data;
            p=p->next;
        }
        else break;
    }

    cout<<"The summary of the link is: "<<sum<<endl;
    return;
}
