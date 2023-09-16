#include<iostream>
using namespace std;

int main()
{
    do
    {
        cout<<"SIMPLE CALCULALTOR\n";
        double a,b;
        int opt,check;
           
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
        
        cout<<"Select an operation below to perform\n";
        cout<<"Press 1 for addition\n";
        cout<<"Press 2 for subtraction\n";
        cout<<"Press 3 for multiplication\n";
        cout<<"Press 4 for division\n";
        cin>>opt;
        
        if(opt==1) cout<<"The result of addition is: "<<a+b<<endl;
        else if(opt==2) cout<<"The result of subtraction is: "<<a-b<<endl;
        else if(opt==3) cout<<"The result of multiplication is: "<<a*b<<endl;
        else if(opt==4) cout<<"The result of division is: "<<a/b<<endl;
        else cout<<"Wrong option!\n";

        cout<<"Press 1 to restart\n";
        cout<<"Press 2 to exit\n";
        cin>>check;
        if (check==1) continue;
        else if (check==2) break;
        else cout<<"Wrong option!, Restarting the program\n";

    }while(1);

    return 0;
}