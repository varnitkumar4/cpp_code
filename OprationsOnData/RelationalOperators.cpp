#include<iostream>
using namespace std;
int main (){

int number1{89};
int number2{232};

cout<<"number1 is:"<<number1<<endl<<"number2 is :"<<number2<<endl;
cout<<"comparing variable"<<endl<<endl;

cout<<boolalpha;
cout<<"number1 < number2:"<<(number1 < number2)<<endl;
cout<<"number1 > number2:"<<(number1 > number2)<<endl;
cout<<"number1 <= number2:"<<(number1 <= number2)<<endl;
cout<<"number1 >= number2:"<<(number1 >= number2)<<endl;
cout<<"number1 == number2:"<<(number1 == number2)<<endl;
cout<<"number1 != number2:"<<(number1 != number2)<<endl;

    return 0;
}