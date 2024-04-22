#include<bits/stdc++.h>
using namespace std;
int main ()
{
    bool flag=false;
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
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"yes";
    }
    else
    cout<<"no";
}