#include <iostream>
using namespace std;
int main()
{
    // int n1=7;
    // int n2=9;

    // int *p1=&n1;
    // int *p2=&n2;
    // cout<<*p1+*p2;

    int x,y;
    int *p1=&x;
    int *p2=&y;
    cout<<"enter 1st and 2nd number :"<<endl;
    cin>>*p1>>*p2;
    cout<<"sump of :"<<*p1<<" + "<<*p2<<" = "<<*p1+*p2;
}