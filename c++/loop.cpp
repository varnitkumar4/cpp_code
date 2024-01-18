// print the sum of first n natural number , where n is input
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter n";
    cin>>n;

    int sum=0;

    int i=1; //loop variable
    while(i<=n){//condition
      sum+=i;
      i++;
    }

    cout<<sum<<endl;
    return 0;
}
