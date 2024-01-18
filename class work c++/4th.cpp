//   develop a program fint thr reverse of a number using while loop
#include<iostream>
using namespace std;
int main(){

   int a,b;
   cout<<"enter the value"<<endl;
   cin>>a;

   while(a>0){
        b=a%10;
        cout<<b;
        a=a/10;
        
   }

}