#include<iostream>
using namespace std;
int main(){

    char alphabet;
    cout<<"enter alphabet:";
    cin>>alphabet;

    switch (alphabet){
        case 'a':
             cout<<"it is a vowel"<<endl;
             break;
         case 'e':
             cout<<"it is a vowel"<<endl;
             break;
         case 'i':
             cout<<"it is a vowel"<<endl;
             break;
         case 'o':
             cout<<"it is a vowel"<<endl;
             break;
         case 'u':
             cout<<"it is a vowel"<<endl;
             break;
        default:
            cout<<"it is consonant";
            break;
    }
    return 0;
}