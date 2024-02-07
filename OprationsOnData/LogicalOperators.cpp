#include <iostream>
using namespace std;
int main()
{

    bool a{true};
    bool b{true};
    bool c{false};

    cout << boolalpha;
    cout << "a is :" << a << endl;
    cout << "b is :" << c << endl;
    cout << "c is :" << c << endl
         << endl;

    // using AND operatore both statement are true then output is true

    cout << "Using AND operation" << endl;

    cout << " a && b : " << (a && b) << endl;
    cout << " a && c : " << (a && c) << endl;
    cout << " a && b && c :" << (a && b && c) << endl
         << endl;

    // Using OR at list operator one statement is true then output is true

    cout << "Using OR operation" << endl;

    cout << " a || b : " << (a || b) << endl;
    cout << " a || c : " << (a || c) << endl;
    cout << " a || b || c :" << (a || b || c) << endl
         << endl;

    // Using NOT operator its change the value true into false and false into true

    cout << "Using NOT operation" << endl;

    cout << " !a : " << !a << endl;
    cout << " !b : " << !b << endl;
    cout << " !c : " << !c << endl
         << endl;

    // Combinations of all Operator

    cout << "Combinations of all Operator :" << endl;
    cout << "!(a || b) & c :" <<( !(a && b) || c )<< endl<<endl;


    //Combining logical operators with relational operators
	int d{100};
	int e{45};
	int f{67};
	

	cout << "Relational and logic operations on integers" << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	

	
	cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << endl; // true
	cout << "(d==e) || (e <= f ) : " << ((d==e) || (e <= f ) ) << endl;
	cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << endl;
	cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << endl;
	cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << endl;
	cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << endl;
	cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << endl;
	cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << endl;

    return 0;
}