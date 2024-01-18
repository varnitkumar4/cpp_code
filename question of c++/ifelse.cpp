// FIND THE MAXIMUM OF THREE NUMBER USING IF ELSE STATEMENTS
#include<iostream>
using namespace std;
int main(){

    int n1 , n2 , n3 ;
    cout<<"enter 3 number";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3)
    {
        cout<<"max is:"<<n1<<endl;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<"max is:"<<n2<<endl;
    }
    else{
        cout<<"max is:"<<n3<<endl;
    }
    return 0;
}