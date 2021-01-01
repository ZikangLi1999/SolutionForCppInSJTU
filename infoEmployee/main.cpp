//示例：员工工资表

#include <iostream>
#include <cstring>

using namespace std;

struct Employee
{
    char name[20];
    double salary;
};

struct node
{
    Employee emp;
    node *next;
};

node *insEmp(node *head,node *p);
node *createbyName();
void print(const node *head);
node *delEmp(node *head,const char *name);
void delLink(node *head);

int main()
{
    node *head;
    char name[20];

    head=createbyName();
    print(head);

    cout<<"\nPlesae input the name of the employee to be deleted：";
    cin>>name;
    head=delEmp(head,name);
    print(head);

    delLink(head);

    return 0;
}

node *insEmp(node *head,node *p)
{
    node *pc,*pa;
    pc=pa=head;

    if (head==NULL)
    {
        head=p;
        p->next=NULL;
        return head;
    }

    if (strcmp(p->emp.name,head->emp.name)<=0)
    {
        p->next=head;
        head=p;
        return head;
    }

    while (pc!=NULL&&strcmp(p->emp.name,pc->emp.name)>0)
    {
        pa=pc;
        pc=pc->next;
    }

    if (pc==NULL)
    {
        pa->next=p;
        p->next=NULL;
    }
    else
    {
        p->next=pc;
        p->next=p;
    }
    return head;
}

node *createbyName()
{
    node *head=NULL,*p;
    char name[20];
    int salary;

    cout<<"Please input the name and salary of each employee(end with @)；\n";
    cin>>name;
    while (name[0]!='@')
    {
        p=new node;
        cin>>salary;
        strcpy(p->emp.name,name);
        p->emp.salary=salary;
        head=insEmp(head,p);
        cin>>name;
    }
    return head;
}

void print(const node *head)
{
    const node *p;
    p=head;

    cout<<"The name and salary of the employee are:"<<endl;
    while (p!=NULL)
    {
        cout<<p->emp.name<<'\t'<<p->emp.salary<<endl;
        p=p->next;
    }
}

node *delEmp(node *head,const char *name)
{
    node *pc,*pa,*headtemp;
    headtemp=pc=pa=head;

    if (head==NULL)
    {
        cout<<"The link is vaccant!\t";
        return NULL;
    }
    if (strcmp(pc->emp.name,name)==0)
    {
        head=pc->next;
        delete pc;
        cout<<"Deleted!\n";
    }
    else
    {
        while (pc!=NULL&&strcmp(pc->emp.name,name))
        {
            pa=pc;
            pc=pc->next;
        }
        if(pc==NULL)
        {
            cout<<"NO link to be delete!\n";
        }
        else
        {
            pa->next=pc->next;
            delete pc;
            cout<<"Deleted!\n";
        }
        head=headtemp;
    }
    return head;
}

void delLink(node *head)
{
    node *p;
    p=head;
    while (head)
    {
        head=p->next;
        delete p;
        p=head;
    }
}
