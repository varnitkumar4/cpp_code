#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter your selling price";
    cin>>sp;
    cout<<"enter your cost price";
    cin>>cp;

    if(sp>cp){
        int profit=sp-cp;
        cout<<"your profit is:"<<profit<<endl;
    }
    else if(cp>sp){
        int loss =cp-sp;
        cout<<"your loss is:"<<loss<<endl;
    }
    else{
        cout<<"no profit or loss"<<endl;
    }
    return 0;
}