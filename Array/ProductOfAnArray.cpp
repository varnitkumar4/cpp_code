#include<iostream>
using namespace std;
int prodectOfAnArray(int arr[], int size)
{
    int product=1;
    for(int i=0; i<size; i++)
    {
        product*=arr[i];
    }
    return product;
}
int main()
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

    int product=prodectOfAnArray(arr,n);
    cout<<"Product of An Array is :"<<product;
}