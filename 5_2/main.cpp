#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cout<<"Please input the row,column of the matrix:";
    cin>>row>>col;
    int **mat=new int *[row];
    for (int r=0;r<row;++r)
        mat[r]=new int [col];
    cout<<"Please input the element of matrix:"<<endl;
    for (int r=0;r<row;++r)
    {
        for (int c=0;c<col;++c)
        {
            cin>>mat[r][c];
        }
    }

    int pointer=0;
    bool found=true,ifmin=true,ifmax=true;
    for (int r=0;r<row;++r)
    {
        pointer=0;
        ifmax=true;
        ifmin=true;
        for (int c=0;c<col;++c)
            if (mat[r][pointer]<mat[r][c]) pointer=c;
        for (int i=0;i<col;++i)
        {
            if (i==pointer) continue;
            else if (mat[r][pointer]==mat[r][i]) ifmax=false;
        }
        if (ifmax)
        {
            for (int r1=0;r1<row;++r1)
            {
                if (r1==r) continue;
                else if (mat[r1][pointer]<=mat[r][pointer]) ifmin=false;
            }
            if (ifmax&&ifmin)
            {
                cout<<"mat["<<r<<"]["<<pointer<<"]="<<mat[r][pointer]<<endl;
                found=false;
            }
        }
    }
    if (found) cout<<"Not Found";
    return 0;
}
