//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;


 void sort1(vector<int> &v)
 {
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        
        if(v[j]<0)j--;
        else if(v[i]>=0)i++;
      //  if(i>j)break;
        else if(v[i]<0 && v[j]>0)
        {
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
 }
int main ()
{
    vector<int>v;
    v.push_back(-1);
    v.push_back(1);
    v.push_back(8);
    v.push_back(-2);
    v.push_back(9);
   //  v.push_back(0);
    v.push_back(-9);
    v.push_back(1);
    v.push_back(-4);
 sort1(v);
 for(int i=0 ;i<v.size(); i++)
 {
    cout<<v[i]<<" ";
 }
 return 0;

}
