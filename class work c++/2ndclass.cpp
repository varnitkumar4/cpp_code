// develop a program to impliment simple calulater using switch case statement and dowhile loop
#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int a,b;
    float result;
    char ch;
    do{
        cout<<"what do you want"<<endl;
        cout<<"press 1 for additin"<<endl;
        cout<<"press 2 for subtraction"<<endl;
        cout<<"press 3 for multipicatin"<<endl;
        cout<<"press 4 for division"<<endl;
        cout<<"press q for quit"<<endl;
        
        cin>>ch;
        switch(ch)
        {
            case '1':
            cout<<"enter a and b";
            cin>>a>>b;
            result=a+b;
            cout<<"result is:"<<result;
            break;

            case '2':
            cout<<"enter a and b";
            cin>>a>>b;
            result=a-b;
            cout<<"result is:"<<result;
            break;

            case '3':
            cout<<"enter a and b";
            cin>>a>>b;
            result=a*b;
            cout<<"result is:"<<result;
            break;

            case '4':
            cout<<"enter a and b";
            cin>>a>>b;
            result=a/b;
            cout<<"result is:"<<result;
            break;

            default:
            cout<<"invalid input";
            break;


        }
    }
    while(ch!='q');
    getch();
    return 0;
}