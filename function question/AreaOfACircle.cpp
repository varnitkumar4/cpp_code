#include<iostream>
using namespace std;
float areaOfACircle(int &n)
{
    return 3.14*n*n;
}

int main ()
{
    int radius;
    cout<<"enter the radius :"<<endl;
    cin>>radius;
   float area= areaOfACircle(radius);
   cout<<"area of a circle is :"<<area;
    }