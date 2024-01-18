// Q2 given radius of the circle . write a function to print the area and circumfreance of the circle
// area of the circle=pie r square,     circumfreance 2pie r
#include<iostream>
using namespace std;
float area(int radius)
{
    return 3.14*radius*radius;
}

float cir(int radius){
    return 2*3.14*radius;
}
int main(){

    int radius;
    cout<<"ernter radius";
    cin>>radius;
    cout<<"are of yhe circle is "<< area(radius)<<endl;
    cout<<"circumfreance of the circle"<<cir(radius);


}