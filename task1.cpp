#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    cout<<"NUMBER GUESSING GAME\n";
    srand(time(0));
    int random=rand()%10 +1,guess;
    do
    {
        cout<<"Enter a number between 1 and 10 ";
        cin>>guess;
        if(random==guess)
        {
            cout<<"Congrats! You have guess the number correctly.\n";
            break;
        }
        else if(guess>random) cout<<"Guessed Number is too high! Try Again.\n";
        else cout<<"Guessed Number is too low! Try Again.\n";
    }while(1);

    return 0;
}