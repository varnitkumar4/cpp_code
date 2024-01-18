// Q3 given the age of the person write a fanction to check . if the person is eligibal to vot or not
#include<iostream>
using namespace std;
void vot(int age){
    if(age>=18){
         cout<<"you can vote";

    }
    else{
        cout<<"you can not vote";
        
    }
}
 int main(){
    int age ;
    cout<<"enter our age";
    cin>>age;
  vot(age);
     return 0;
 }