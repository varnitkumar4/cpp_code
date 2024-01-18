// Q4 given two number a and b write a program using function to print all odd between them
#include<iostream>
using namespace std;
bool isOdd(int num){
    if(num % 2 == 0){
        return false;
    }
    else{
        return true; 
    }
}
int main(){
int a, b;
cout<<"enter number which i found odd between them";
cin>>a>>b;
for(int i=a; i<=b; i++){
    if(isOdd(i)){
        cout<<i<<endl;
    }
}
}