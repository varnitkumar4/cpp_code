#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    if(n%3==0 && n%5==0)
    {
        cout<<n<<" Divisible by 3 and 5";
    }
    else {
        cout<<"not divisible ";
    }
}