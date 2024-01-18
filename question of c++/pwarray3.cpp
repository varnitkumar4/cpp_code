// given a vector arr sorted in increasing order of size and integer x , find if there exitsts a pair in the array whose absolute difference is exactly x.

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {5, 10, 15, 20, 26};
    int i = 0;
    int j = 0;
    int n = 5;
    int x = 19;
    // code to check wheter there is any pair with the given abs diif
    bool found = false;
    while (i < n and j < n)
    {
        if ((arr[j] - arr[i]) == x)
        {
            found = true;
            break;
        }
        else if ((arr[j] - arr[i]) < x)
        {
            j++;
        }
        else
            i++;
    }
    if(found==true)cout<<"YES";
    else cout<<"NO";
    return 0;
}
