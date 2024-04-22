#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[5]={0,0,0,0,0};
    int max1=INT_MIN;
    int max2=INT_MIN;

    for(int i=0; i<5; i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if (max2<arr[i]&& max1!=arr[i])
        {
            max2=arr[i];
        }

    }
    cout<<max1<<endl;
    if(max2==INT_MIN) cout<<"this array does not contain any second largest element"<<endl;
    else
    cout<<endl<<max2;
}