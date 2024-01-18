// develop a c++ program to find the fibonaci series till the limit enter by the user
#include<iostream>
using namespace std;
int main(){

    int n;
   int a=0;
   int b=1;
   cout<<"enter n";
   cin>>n;
   cout<<"0"<<endl;
//    for(int i=0; b<=n; i++){
                 for(; b<=n;){
    
    b=a+b;
    a=b-a;
    cout<<a<<endl;
   }
    
}