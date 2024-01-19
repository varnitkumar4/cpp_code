// WRITE A PROGRAM TO ADD TWO NUMBER INPIT BY A USER USING FUNCTION
#include <iostream>
using namespace std;
int Add(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    cout << "enter the value of a nad b";
    cin >> a >> b;

    cout << "sum of  " << a << "+" << b << " is :" << Add(a, b);
}
