#include<iostream>
using namespace std;
int main(){

    int score;
    cin>>score;

    //score >80 , print well don
    //score =50-80 , print can improve
    //score <50, orint poor performance

if(score>80){
    cout<<"well don!"<<endl;
}
else if(score>50){
    cout<<"can improve";
}
else{
    cout<<"poor performance"<<endl;
}

    return 0;
}