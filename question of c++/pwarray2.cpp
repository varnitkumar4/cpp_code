// given a vactor array sorted in increasing order of size and an integer X , find if the exists a pair in the array whose sum is exacity in x
#include<iostream>
using namespace std;
int main(){

    int arr[8];//={-2,-1,0,3,6,8,11,12};
    cout<<"enter array";
    cin>>arr[8];
    int x;//=16;
    cout<<"enter x";
    cin>>x;
    int n;//=8;
    cout<<"enter n";
    cin>>n;
    // code to find if there is a pair with sum x

    int i=0;
    int j=n-1;

    bool found =false;
    while(i<j){
        if(arr[i]+arr[j]==x)
        {
            // we found a pair
            found=true;
            break;

        }
        else if(arr[i]+arr[j]<x){
            //  sum is less than x, increase the sum
            i++;
        }
        else{
            //  sum is more than x, decrease the sum
            j--;
        }
    }

    if(found == true) cout<<"YES";
    else cout<<"NO";
    return 0;
}