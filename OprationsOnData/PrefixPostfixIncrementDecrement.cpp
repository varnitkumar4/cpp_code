#include <iostream>
using namespace std;
int main()
{

    int num{8};
    num = num + 1; // increment by one
    cout << "the present number is :" << num << endl;

    num = 45;
    num = num - 1; // Decrement by one
    cout << "the present number is :" << num << endl;

    cout << "====postfix increment and postfix Decrement====" << endl;
    num = 48;
    cout << "postfix increment is:" << num++ << endl;
    cout << "the number is :" << num << endl;

    num = 87;
    cout << "postfix Decrement is:" << num-- << endl;
    cout << "the number is :" << num << endl;

    cout << "====prefix increment and prefix Decrement====" << endl;

    num = 88;
    ++num;
    cout << "the number is :" << num << endl;

    num = 57;
    --num;
    cout << "the number is :" << num << endl;
    return 0;
}