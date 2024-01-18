// Q1 SUM OF N NATURAL NUMBER
#include <iostream>
using namespace std;
int sum(int n)
{
    int answer = 0;
    for (int i = 1; i <= n; i++)
    
        answer += i;
        return answer;
    
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    cout << sum(n)<< endl;
}