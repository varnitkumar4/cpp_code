// Q 1= WRITE A FUNCTION TO PRINT SQUATES OF THR FIRST 5 NATURAL NUMBER
#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
int main()
{
for(int i=1; i<=5; i++)
{
    cout<<square(i)<<endl;
}
}