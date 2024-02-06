#include <iostream>
using namespace std;
int main()
{

    int a{5};
    int b{6};
    int c{3};
    int d{7};
    int e{9};
    int f{2};
    int g{6};

    int result = a + b - c * d / e * f % g;
    cout << "result is :" << result << endl;

    result = a + b - (c * d) / (e * f) % g;
    cout << "result is :" << result << endl;
    return 0;
}