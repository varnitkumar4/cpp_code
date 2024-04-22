#include<iostream>
using namespace std;
void OddNumber(int &a, int &b)
{
    for(int i=a;i<=b; i++)
    {
        if(i%2!=0) 
      cout<<endl<<i<<endl;
    }
 

    return;
}
int main ()
{
    int a,b;
    cout<<"enter the value of a and b:"<<endl;
    cin>>a>>b;
    OddNumber(a,b);
}