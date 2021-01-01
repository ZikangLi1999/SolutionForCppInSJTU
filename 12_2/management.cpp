#include <iostream>
#include <cstring>
#include "management.h"

using namespace std;

struct stuInfomation
{
    char id[15];
    char name[15];
    float math;
    float english;
    float physics;
    float total;
};

struct stuList
{
    stuInfomation info;
    stuList *form;
    stuList *next;
};

//Create essential poiters
stuList *head,*pr,*prform;

void initialize()
{
    pr=prform=head=new stuList;
}

void edit_add()
{
    //Ganrantee that pr points to the last linknode
    if (prform->next!=NULL)
    {
        while (prform->next!=NULL) prform=prform->next;
    }

    //Create linknode
    pr=new stuList;
    prform->next=pr;
    pr->form=prform;

    cout<<"Please input the infomation:\n"
        <<"ID\t\tName\t\tMath\t\tEnglish\t\tPhysics\n";
    cin>>pr->info.id >>pr->info.name >>pr->info.math >>pr->info.english >>pr->info.physics;
    cout<<"A new student added!\n";

    //Calculate the total grades
    pr->info.total=pr->info.math+pr->info.english+pr->info.physics;

    //Complete current knot and prepare for next knot
    pr->next=NULL;
    prform=pr;

    return;
}

void edit_modify()
{
    bool flag=false;
    char target[15];
    stuList *pr=head;

    cout<<"Please input the target student ID: ";
    cin>>target;

    while (pr->next!=NULL)
    {
        pr=pr->next;
        if (strcmp(target,pr->info.id)==0)
        {
            flag=true;
            cout<<"A student found:\n"
                <<"ID\t\tName\t\tMath\t\tEnglish\t\tPhysics\t\tTotal\n"
                <<pr->info.id<<"\t"<<pr->info.name
                <<"\t\t"<<pr->info.math<<"\t\t"<<pr->info.english<<"\t\t"<<pr->info.physics
                <<"\t\t"<<pr->info.total<<"\n\n"
                <<"Please input the modified infomation:\n"
                <<"ID\t\tName\t\tMath\t\tEnglish\t\tPhysics\t\tTotal\n";
            cin>>pr->info.id >>pr->info.name >>pr->info.math >>pr->info.english >>pr->info.physics;
            pr->info.total=pr->info.math+pr->info.english+pr->info.physics;
            cout<<"A student modified!\n";
        }
    }
    if (!flag) cout<<"Not found!\n";
}

void prn_infomation()
{
    struct statistics
    {
        int num;
        float math;
        float english;
        float physics;
    } cal;

    //Initialization of cal
    cal.num=0;
    cal.math=0;
    cal.english=0;
    cal.physics=0;

    //Initialization of pr
    pr=head;

    cout<<"Infomation of all students:\n"
        <<"ID\t\tName\t\tMath\t\tEnglish\t\tPhysics\t\tTotal\n";

    while (pr->next!=NULL)
    {
        pr=pr->next;

        cout<<pr->info.id<<"\t"<<pr->info.name
            <<"\t\t"<<pr->info.math<<"\t\t"<<pr->info.english<<"\t\t"<<pr->info.physics
            <<"\t\t"<<pr->info.total<<endl;

        //Count students number and total grades of every subjects
        ++cal.num;
        cal.math+=pr->info.math;
        cal.english+=pr->info.english;
        cal.physics+=pr->info.physics;
    }

    //Calculate and output the average grades of every subjects
    cal.math/=cal.num;
    cal.english/=cal.num;
    cal.physics/=cal.num;
    cout<<"\nThe average grades of every subjects are:\nStudents number\t\t\tMath\t\tEnglish\t\tPhysics\n"
        <<cal.num<<"\t\t\t\t"<<cal.math<<"\t\t"<<cal.english<<"\t\t"<<cal.physics<<endl;
    return;
}

void srch_id()
{
    bool flag=false;
    char target[15];
    stuList *pr=head;

    cout<<"Please input the target student ID: ";
    cin>>target;

    //Search by ID (using function:strcmp)
    while (pr->next!=NULL)
    {
        pr=pr->next;
        if (strcmp(target,pr->info.id)==0)
        {
            flag=true;
            cout<<"A student found:\n"
                <<"ID\t\tName\t\tMath\t\tEnglish\t\tPhysics\t\tTotal\n"
                <<pr->info.id<<"\t"<<pr->info.name
                <<"\t\t"<<pr->info.math<<"\t\t"<<pr->info.english<<"\t\t"<<pr->info.physics
                <<"\t\t"<<pr->info.total<<"\n";
        }
    }
    if (!flag) cout<<"Not found!\n";
}

void srch_name()
{
    bool flag=false;
    char target[15];
    stuList *pr=head;

    cout<<"Please input the target student name: ";
    cin>>target;

    //Search by name (using function:strcmp)
    while (pr->next!=NULL)
    {
        pr=pr->next;
        if (strcmp(target,pr->info.name)==0)
        {
            flag=true;
            cout<<"A student found:\n"
                <<"ID\t\tName\t\tMath\t\tEnglish\t\tPhysics\t\tTotal\n"
                <<pr->info.id<<"\t"<<pr->info.name
                <<"\t\t"<<pr->info.math<<"\t\t"<<pr->info.english<<"\t\t"<<pr->info.physics
                <<"\t\t"<<pr->info.total<<"\n";
        }
    }
    if (!flag) cout<<"Not found!\n";
}

void sort_id()
{
    bool flag;
    stuList *pr;

    //Sort in ascending order of student ID (using function:strcmp)
    while (true)
    {
        flag=false;
        pr=head->next;
        while (pr!=NULL&&pr->next!=NULL)
        {
            if (pr->next!=NULL&&strlen(pr->info.id)>strlen(pr->next->info.id))
            {
                flag=true;
                pr->form->next=pr->next;
                pr->next->form=pr->form;
                pr->form=pr->next;
                if (pr->next->next!=NULL)
                    pr->next->next->form=pr;
                pr->next=pr->next->next;
                pr->form->next=pr;
                pr=pr->next;
                continue;
            }
            if (pr->next!=NULL&&strlen(pr->info.id)==strlen(pr->next->info.id)&&strcmp(pr->info.id,pr->next->info.id)>0)
            {
                flag=true;
                pr->form->next=pr->next;
                pr->next->form=pr->form;
                pr->form=pr->next;
                if (pr->next->next!=NULL)
                    pr->next->next->form=pr;
                pr->next=pr->next->next;
                pr->form->next=pr;
            }
            pr=pr->next;
        }
        if (!flag)
        {
            cout<<"Sorted in ascending order of student ID!\n";
            return;
        }
    }
}

void sort_grades()
{
    bool flag;
    stuList *pr;

    //Sort in descending order of total grades
    while (true)
    {
        flag=false;
        pr=head->next;
        while (pr!=NULL)
        {
            if (pr->next!=NULL&&pr->info.total<pr->next->info.total)
            {
                flag=true;
                pr->form->next=pr->next;
                pr->next->form=pr->form;
                pr->form=pr->next;
                if (pr->next->next!=NULL)
                    pr->next->next->form=pr;
                pr->next=pr->next->next;
                pr->form->next=pr;
            }
            pr=pr->next;
        }
        if (!flag)
        {
            cout<<"Sorted in descending order of total grades!\n";
            return;
        }
    }
}
