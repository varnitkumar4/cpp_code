#include <iostream>
using namespace std;
int main()
{

    int apple1{678}; // Declare
    cout << "apple1 :" << apple1 << endl;

    apple1 = 76; // Assign
    cout << "apple1 is :" << apple1 << endl;

    cout << "------------------------------" << endl;

    double apple2{67.78}; // Declare
    cout << "apple2 :" << apple2 << endl;

    apple2 = 76.56; // Assign
    cout << "apple2 is :" << apple2 << endl;

    cout << "------------------------------" << endl;

    bool apple3{true}; // Declare
    cout << boolalpha;
    cout << "apple3 :" << apple3 << endl;

    apple3 = false; // Assign
    cout << "apple3 is :" << apple3 << endl;

    cout << "------------------------------" << endl;

    // Auto type deduction
    // Careful about auto assignments
    auto var3{678u}; // Declare and initialize with type deduction

    var3 = -67; // Assign negative number

    cout << "var3 : " << var3 << endl;

    return 0;
}