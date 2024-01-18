#include<iostream>
using namespace std;
int main(){

    int marks;
    cout<<"enter marks";
    cin>>marks;

    if(marks>33){
        cout<<"pass"<<endl;
    }
    else{
        cout<<"fail"<<endl;
    }

    //using ternary operator

    marks>30 ? cout<<"pass"<<endl : cout<<"fail"<<endl; 

    return 0;
}