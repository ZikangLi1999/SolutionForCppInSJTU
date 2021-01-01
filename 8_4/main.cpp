#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void guessNumber();

int main()
{
    char flag='y';

    while(flag=='y'||flag=='Y')
    {
        guessNumber();
        do
        {
            cout<<"\nWould you like to play again(y or n)?";
            cin>>flag;
        }while (flag!='y'&&flag!='Y'&&flag!='n'&&flag!='N');
    }
    return 0;
}

void guessNumber()
{
    srand(time(NULL));
    int num=rand()*100/(RAND_MAX+1),guess;

    cout<<"I have a number between 1 and 100.\nPlease input your guess:";
    cin>>guess;

    while(true)
    {
        if (guess==num)
        {
            cout<<"Excellent!You guessed the number!";
            break;
        }
        else
        {
            if (guess>num)
            {
                cout<<"Too high!Try again:";
                cin>>guess;
            }
            if (guess<num)
            {
                cout<<"Too low!Try again:";
                cin>>guess;
            }
        }
    }
}
