// WRIYE A PROGRAM TO PRINT THE VALUE IF IT IS EVEN AND DIVISIBLE BY 3
#include<iostream>
using namespace std;
int main (){
    
    int num;
    cout<<"enter number";
    cin>>num;

    if((num%2==0) && (num%3==0)){
        cout<<"this is even or diviseable by 3";
    }
    return 0;

}