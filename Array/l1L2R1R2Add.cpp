#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m,n;
    cout<<"enter size of 2D array";
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter element in array";
    for(int i=0; i<m;i++)
    {
        for(int j=0; j<n; j++)
        cin>>arr[i][j];
    }
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int sum =0;

    for(int i=min(l1,l2);i<=max(l1,l2);i++)
    {
        for(int j=min(r1,r2);j<=max(r1,r2);j++)
        {
            sum += arr[i][j];
        }
    }
cout<<endl;
    cout<<sum;
}