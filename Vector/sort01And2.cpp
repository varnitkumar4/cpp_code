#include<bits/stdc++.h>
using namespace std;
void sort01And2(vector<int> &v)
{\
    int n=v.size();
   int s=0;
   int m=0; 
   int e=n-1;
   while(m<=e)
   {
    if(v[m]==2)
    {
        swap(v[m],v[e]);
        e--;
    }
    if(v[m]==0)
    {
        swap(v[m],v[s]);
        s++;
        m++;
    }
    if(v[m]==1)
    {
        m++;
    }
   }

}
int main ()
{
    int n;
  cout<<"enter size of vector"<<endl;
  cin>>n;
  vector<int>v(n);
  cout<<"Enter vector element "<<endl;
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }
  sort01And2(v);
   for(int i=0; i<n; i++)
  {
    cout<<v[i]<<" ";
  }

}