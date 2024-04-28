#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of an array: "<<endl;
     cin>>n;
    int arr[n];

   
    cout<<"enter array element "<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
        
    }
    
    int x;
    cout<<"enter value of x"<<endl;
    cin>>x;
    bool flage =false;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==x){
                cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<x<<endl;
                flage=true;}
               
            }
        }
    }
    if (flage == false)
    {
       cout<<"not fount any triplate ";
    }
   
}