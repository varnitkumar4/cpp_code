#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "enter number of row in 1st matrix :";
    cin >> m;
    int n;
    cout << "enter number of col in 1st matrix :";
    cin >> n;

    int p;
    cout << "enter number of row in 2nd matrix :";
    cin >> p;
    int q;
    cout << "enter number of col in 2nd matrix :";
    cin >> q;

    if (n == p)
    {
        int a[m][n];
        cout<<"enter element in 1st matrix : "<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }


        int b[p][q];
        cout<<"enter element in 2nd matrix : "<<endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }

        int res[m][q];
        for(int i=0; i<m;i++)
        {
            for(int j=0; j<q;j++)
            {
                res[i][j]=0;
                for(int k=0;k<p;k++)
                {
                    res[i][j] +=a[i][k]  * b[k][j];
                }
            }
        }

cout<<endl;
        //print matrix


         for(int i=0; i<m;i++)
        {
            for(int j=0; j<q;j++)
            {
               cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout << "the matrix can not be multiply";
    }
}