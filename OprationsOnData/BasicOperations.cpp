#include <iostream>
using namespace std;
int main()
{
    // Addition

    int number1, number2, result;
    cout << "enter the value of number1 and number2" << endl;
    cin >> number1 >> number2;

    result = number1 + number2;
    cout << "Addition is :" << result << endl;

    cout << "--------------------------------------------" << endl;
    // Subtraction

    result = number1 - number2;
    cout << "Subtraction is :" << result << endl;

    cout << "--------------------------------------------" << endl;

    // Multiplication

    result = number1 * number2;
    cout << "Multiplication is :" << result << endl;

    cout << "--------------------------------------------" << endl;

    // Division

    result = number1 / number2;
    cout << "Division is :" << result << endl;

    cout << "--------------------------------------------" << endl;

    // Modulus %

    result = number1 % number2;
    cout << "Modulus is :" << result << endl;

    cout << "--------------------------------------------" << endl;
    return 0;
}
