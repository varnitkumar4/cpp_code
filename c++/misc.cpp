#include<iostream>
using namespace std;
int main(){
    int a=4;
    cout<<sizeof(a)<<endl; //4

    char name='a';
    cout<<sizeof(name)<<endl;
    bool flage;
    a==name?flage =true : flage =false;
    cout<<flage<<endl;

    cout<<(&a)<<endl;
    

    return 0;
}