#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "enter number of row in  matrix :";
    cin >> m;
    int n;
    cout << "enter number of col in  matrix :";
    cin >> n;

    int arr[m][n];
    cout<<"enter element in array"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[j][i]<<" ";
            }
        }

        else{
            for(int j=n-1;j>=0;j--)
            {
                cout << arr[j][i]<<" ";
            }
        }
        
    }
}