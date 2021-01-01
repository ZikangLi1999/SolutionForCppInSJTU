#include <iostream>
#include "management.h"

using namespace std;


int main()
{
    int slt;

    //Print welcome page
    cout<<"Welcome to Student Grades Management Sysytem!\n"
        <<"1.Add student infomation\n"
        <<"2.Modify student infomation\n"
        <<"3.Print all student infomation\n"
        <<"4.Search student infomation by student ID\n"
        <<"5.Search student infomation by student name\n"
        <<"6.Sort in ascending order of student ID\n"
        <<"7.Sort in descending order of total grades\n"
        <<"0.Quit\n";

    //Initialize the poiters in management.cpp
    initialize();

    //Main function
    while (true)
    {
        cout<<endl;
        for (int i=0;i<85;++i) cout<<'=';
        cout<<"\nPlease input your selection: ";
        cin>>slt;

        switch (slt)
        {
            case 0:return 0;
            case 1:edit_add(); break;
            case 2:edit_modify(); break;
            case 3:prn_infomation(); break;
            case 4:srch_id(); break;
            case 5:srch_name(); break;
            case 6:sort_id(); break;
            case 7:sort_grades(); break;
            default:cout<<"\nInput Error!\n";
        }
    }
    return 0;
}
