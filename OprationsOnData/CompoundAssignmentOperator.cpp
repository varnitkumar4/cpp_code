#include <iostream>
using namespace std;

int main()
{

    int number{76};

    cout << "the number is :" << number << endl;

    number += 9; // its means number=number+9
    cout << "the number is (after += 9):" << number << endl;

    number -= 5; // its means number=number-9
    cout << "the number is (after -= 5):" << number << endl;

    number *= 2; // its means number=number*9
    cout << "the number is (after *= 2):" << number << endl;

    number /= 4; // its means number=number/9
    cout << "the number is (after /= 4):" << number << endl;

    number %= 12; // its means number=number%9
    cout << "the number is (after %= 12):" << number << endl;

    return 0;
}