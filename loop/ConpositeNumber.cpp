#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number ";
    cin >> n;
    bool flage = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flage = false;
            break;
        }
    }
    if (n == 1) cout << "1 is nither prime nor composite";
    else if (flage == true) cout << n << " " << " is prime ";
        else cout << n << " "<< " is Composite ";

    return 0;
}