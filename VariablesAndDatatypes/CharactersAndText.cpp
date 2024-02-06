#include <iostream>

int main()
{
    char character1{'v'};
    char character2{'a'};
    char character3{'r'};
    char character4{'n'};
    char character5{'i'};
    char character6{'t'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;
    std::cout << character6 << std::endl;

    // One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;

    char value = 65;                               // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;


// sizeof character 
    std::cout<< "sizeof char is :"<<sizeof(char)<<std::endl;
    return 0;
}