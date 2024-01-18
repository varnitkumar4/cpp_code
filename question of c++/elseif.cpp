//IF ELSE ELSE IF WRITE A PROGRAM TO DIVIDE PEOPLE INTO 3 AGE GROUP DEPENDING UPON THEIR AGE

#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"enter age";
    cin>>age;

    if(age<12){
        cout<<"child";
    }
    else if(age>18){
        cout<<"adult";
    }
    else{
        cout<<"teenager";
    }

    return 0;
}