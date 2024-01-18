//DESIGN A CALCULATOR TO PERFORM BASIC ARITHMETIC OPERATION (+,-,/,*,%)
#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"enter 2 integer:";
    cin>>n1>>n2;

    cout<<"enter an operator(+,-,/,*,%):";
    char op;
    cin>>op;

    switch (op){
        case '+':
            cout<<"sum is :"<<n1+n2<<endl;
            break;
        case '-':
            cout<<"difference is :"<<n1-n2<<endl;
            break;
        case '*':
            cout<<"product is  :"<<n1*n2<<endl;
            break;  
        case '/':
            cout<<"division is :"<<n1/n2<<endl;
            break;
        case '%':
            cout<<"remender is :"<<n1%n2<<endl;
            break;   
        default:
               cout<<"it is not a valid operator";
    }

    return 0;
}