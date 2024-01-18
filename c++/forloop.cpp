// print the sum of first n natural number , where n is input(by for loop)
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter n";
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}