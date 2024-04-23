#include<bits/stdc++.h>
using namespace std;
void sort0(vector<int>&v)
{
    int n=v.size();
    int zerocount=0;
    int onecount=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0)zerocount++;
        else onecount++;
    }
    for(int i=0; i<n ; i++)
    {
        if(i<zerocount)v[i]=0;
        else
        v[i]=1;
    }
}

//                      2ND METHOD
 void sort1(vector<int> &v)
 {
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(v[j]==1)j--;
        else if(v[i]==0)i++;
      //  if(i>j)break;
        else if(v[i]==1 && v[j]==0)
        {
            swap(v[i],v[j]);
            i++;
            j--;
        }
       // else v[i]=2;
    }
 }
int main ()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);

 //sort0(v);
 sort1(v);
 for(int i=0 ;i<v.size(); i++)
 {
    cout<<v[i]<<" ";
 }
}