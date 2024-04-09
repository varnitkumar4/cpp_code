#include<iostream>
using namespace std; 
int main()
{
  int n;
  cout<<"enter the vlaue of n";
  cin>>n;
  for(int i=0; i<n; i++)
  {
    for(int c=0; c<i+1;c++)
    {
       cout<<"* ";
    }
    cout<<endl;
  }
}