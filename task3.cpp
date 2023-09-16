#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void printboard(char arr[3][3])
{
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j)
        { 
            cout<<arr[i][j]<<" ";
            if(j<2) cout<<"|";
        }    
        cout<<endl;
        if (i<2) cout<<"---------"<<endl;
    }    
    cout<<endl;

}

bool checkwin(char arr[3][3],char player)
{
    for (int i = 0; i < 3; ++i) 
    {
        if (arr[i][0] == player && arr[i][1] == player && arr[i][2] == player) 
        return true; 
        if (arr[0][i] == player && arr[1][i] == player && arr[2][i] == player)
        return true; 
    }

    //diagnols
    if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player) 
    return true;
    if (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player) 
    return true;


    return false;
}

bool draw(char arr[3][3])
{
    for (int i = 0; i < 3; ++i) 
        for (int j = 0; j < 3; ++j) 
            if(arr[i][j]=='#');
                return false;
    if(!(checkwin(arr,'X')) && !(checkwin(arr,'O')))
        return true;
    return false; 
}

int main()
{
    cout<<"TIC-TAC-TOE GAME\n";

    srand(time(0));
    char arr[3][3];
    ///array initailization
    for (int i = 0; i < 3; ++i) 
        for (int j = 0; j < 3; ++j) 
            arr[i][j]='#'; //# represents empty spaces

    printboard(arr);
    
    int x,o,i,j;    
    cout<<"You are X and Computer is O\n";
    do{
        do{
            cout<<"Enter a position from 1-9\n";
            cin>>x;
            if(x>=1 && x<=3){
                i=0;
                j=x-(i*3)-1;
            }
            if(x>=4 && x<=6){
                i=1;
                j=x-(i*3)-1;
            }
            if(x>=7 && x<=9){
                i=2;
                j=x-(i*3)-1;
            }
            if(arr[i][j]=='#')
            {
                arr[i][j]='X';
                break;
            }
            else cout<<"invalid position\n";
        }while(1);

        if(checkwin(arr,'X'))
        {
            cout<<"YOU WIN\n";
            break;
        }

        if(draw(arr))
        {
            cout<<"Game Draw\n";
            break;
        }


        do{
            o=rand()%9;
            if(o>=1 && o<=3){
                i=0;
                j=o-(i*3)-1;
            }
            else if(o>=4 && o<=6){
                i=1;
                j=o-(i*3)-1;
            }
            else if(o>=7 && o<=9){
                i=2;
                j=o-(i*3)-1;
            }
            if(arr[i][j]=='#')
            {
                arr[i][j]='O';
                break;
            }
        }while(1);
        
        printboard(arr);
        if(checkwin(arr,'O'))
        {
            cout<<"COMPUTER WON\n";
            break;
        }
        
        if(draw(arr))
        {
            cout<<"Game Draw\n";
            break;
        }

    }while(1);


    return 0;
}