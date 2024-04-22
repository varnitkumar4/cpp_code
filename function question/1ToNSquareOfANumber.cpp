#include<iostream>
using namespace std;
void SquareOfNumber(int &p)
{
    for(int i=1; i<=p; i++)
    {
        cout<<"square of " << i <<" is : "<<i*i<<endl;
    }
}
int main ()
{
    int n;
    cout<<"enter the valuse of n :"<<endl;
    cin>>n;

    SquareOfNumber(n);
    
}