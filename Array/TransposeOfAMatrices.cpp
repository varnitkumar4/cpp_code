#include<bits/stdc++.h>
using namespace std;
int main ()
{
      int row;
    cout<<"enter the number of row ";
    cin>>row;

    
    int colume;
    cout<<"enter the number of colume ";
    cin>>colume;

    int arr[row][colume];
    cout<<"enter array element";
    for(int i=0; i<row;i++)
    {
        for(int j=0; j<colume; j++)
        {
            cin>>arr[i][j];
        }
    }

 for(int i=0; i<row;i++)
    {
        for(int j=0; j<colume; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpose of a matrix is ";


     for(int i=0; i<row;i++)
    {
        for(int j=0; j<colume; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}