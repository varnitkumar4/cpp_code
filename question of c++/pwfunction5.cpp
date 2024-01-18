//  Q5 give two number a and b , write a program to prin all prime number present between them
#include<iostream>
using namespace std;
bool prime(int num){
    for(int i=2; i<=num-1; i++){
        if(num % i ==0){
            return false;
        }
        return true;
    }
}
int main (){
    int a , b;
    cout<<" enter a nad b to find prime number between them";
    cin>>a>>b;
   for(int i=a; i<=b; i++){
    if(prime(i)){
        cout<<i<<endl;
    }
    
   }
   return 0;

}