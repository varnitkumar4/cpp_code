#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    // Use of endl- it is a new line character

    cout << "Hello";
    cout << "World";

    cout << endl;
    cout << "====================================" << endl;
     cout << "====================================" << endl;

    // after use endl;
    cout << " After Use of endl";

    cout << "Hello" << endl;
    cout << "World" << endl;

    cout << "====================================" << endl;
    // Also we use \n

    cout << "Hello\n";
    cout << "World\n";

    cout << "====================================" << endl;

    cout << "After use std::flush";
    // std::flush : flushes the output buffer to its final destination.
    std::cout << "This is a Good line..." << std::endl
              << std::flush;
    // After this std::flush, we're sure that at this line, the message has been sent
    // to the stream. This may be important in some applications.

    cout << "====================================" << endl;

    // std::setw() : Adjusts the field with for the item about to be printed.
    // The setw() manipulator only affects the next value to be printed.
    //  Use to change of width of the next input / output field

    cout << "Unformatted table : " << endl;
    cout << "FirstName" << " " << "LastName" << " " << "Age" << endl;
    cout << "Vanit" << " " << "Singh" << " 20" << endl;
    cout << "Ramakant" << " " << "Singh" << " 21" << endl;
    cout << "Aditya" << " " << "Jha" << " 22" << endl;
    cout << "Nitin" << " " << "Raj" << " 23" << endl;
    cout << "Raju" << " " << "Kumar" << " 24" << endl;
    cout << "Abhinav" << " " << "Vads" << " 25" << endl;

   
    cout << "Formatted table : " << endl;
    cout << setw(10) << "FirstName" << setw(10) << "LastName" << setw(5) << "Age" << endl;
    cout << setw(10) << "Vanit" << setw(10) << "Singh" << setw(5) << " 20" << endl;
    cout << setw(10) << "Ramakant" << setw(10) << "Singh" << setw(5) << " 21" << endl;
    cout << setw(10) << "Aditya" << setw(10) << "Jha" << setw(5) << " 22" << endl;
    cout << setw(10) << "Nitin" << setw(10) << "Raj" << setw(5) << " 23" << endl;
    cout << setw(10) << "Raju" << setw(10) << "Kumar" << setw(5) << " 24" << endl;
    cout << setw(10) << "Abhinav" << setw(10) << "Vads" << setw(5) << " 25" << endl;

    cout << endl;

    cout << "Formatted table with variables: " << endl;
    int col_width{16};

    cout << setw(col_width) << "FirstName"<< setw(col_width) << "LastName" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Vanit"    << setw(col_width) << "Singh"    << setw(col_width) << " 20" << endl;
    cout << setw(col_width) << "Ramakant "<< setw(col_width) << "Singh"    << setw(col_width) << " 21" << endl;
    cout << setw(col_width) << "Aditya"   << setw(col_width) << "Jha"      << setw(col_width) << " 22" << endl;
    cout << setw(col_width) << "Nitin"    << setw(col_width) << "Raj"      << setw(col_width) << " 23" << endl;
    cout << setw(col_width) << "Raju"     << setw(col_width) << "Kumar"    << setw(col_width) << " 24" << endl;
    cout << setw(col_width) << "Abhinav"  << setw(col_width) << "Vads"     << setw(col_width) << " 25" << endl;


cout << "====================================" << endl;

//Justify : Values can be justified in their fields. There are three manipulators
    //          for adjusting the justification: left, right, and internal. 
    
    //right justified

    cout << "Right justified table(default) :  " << endl;
    
    col_width = 20;
    
    cout << right;
     cout << setw(col_width) << "FirstName"<< setw(col_width) << "LastName" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Vanit"    << setw(col_width) << "Singh"    << setw(col_width) << " 20" << endl;
    cout << setw(col_width) << "Ramakant "<< setw(col_width) << "Singh"    << setw(col_width) << " 21" << endl;
    cout << setw(col_width) << "Aditya"   << setw(col_width) << "Jha"      << setw(col_width) << " 22" << endl;
    cout << setw(col_width) << "Nitin"    << setw(col_width) << "Raj"      << setw(col_width) << " 23" << endl;
    cout << setw(col_width) << "Raju"     << setw(col_width) << "Kumar"    << setw(col_width) << " 24" << endl;
    cout << setw(col_width) << "Abhinav"  << setw(col_width) << "Vads"     << setw(col_width) << " 25" << endl;

cout << "====================================" << endl;


 cout << "Left justified table(default) :  " << endl;
    
    col_width = 20;
    
    cout << left;
     cout << setw(col_width) << "FirstName"<< setw(col_width) << "LastName" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Vanit"    << setw(col_width) << "Singh"    << setw(col_width) << " 20" << endl;
    cout << setw(col_width) << "Ramakant "<< setw(col_width) << "Singh"    << setw(col_width) << " 21" << endl;
    cout << setw(col_width) << "Aditya"   << setw(col_width) << "Jha"      << setw(col_width) << " 22" << endl;
    cout << setw(col_width) << "Nitin"    << setw(col_width) << "Raj"      << setw(col_width) << " 23" << endl;
    cout << setw(col_width) << "Raju"     << setw(col_width) << "Kumar"    << setw(col_width) << " 24" << endl;
    cout << setw(col_width) << "Abhinav"  << setw(col_width) << "Vads"     << setw(col_width) << " 25" << endl;


cout << "====================================" << endl;


cout << "Table with fill characters :  " << std::endl;
  col_width = 20;
    
    cout << left;
    cout<<setfill('=');
     cout << setw(col_width) << "FirstName"<< setw(col_width) << "LastName" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Vanit"    << setw(col_width) << "Singh"    << setw(col_width) << " 20" << endl;
    cout << setw(col_width) << "Ramakant "<< setw(col_width) << "Singh"    << setw(col_width) << " 21" << endl;
    cout << setw(col_width) << "Aditya"   << setw(col_width) << "Jha"      << setw(col_width) << " 22" << endl;
    cout << setw(col_width) << "Nitin"    << setw(col_width) << "Raj"      << setw(col_width) << " 23" << endl;
    cout << setw(col_width) << "Raju"     << setw(col_width) << "Kumar"    << setw(col_width) << " 24" << endl;
    cout << setw(col_width) << "Abhinav"  << setw(col_width) << "Vads"     << setw(col_width) << " 25" << endl;


    return 0;
}