#include<bits/stdc++.h>
using namespace std;
int main ()
{
      int n ;
    cout<<"enter size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter element of an array :"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
     for(int i=0; i<n; i++)
    {
       cout<<arr[i]<<" ";
    }

}