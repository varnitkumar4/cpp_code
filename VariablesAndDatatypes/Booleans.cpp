#include <iostream>

int main()
{
    bool orange_light{true};
    bool white_light{false};

    if (orange_light == false) 
    {
        std::cout << "stop" << std::endl;
    }
    else
    {
        std::cout << "Go through " << std::endl;
    }

    if (white_light)
    {
        std::cout << "this light is white " << std::endl;
    }
    else
    {
        std::cout << "this light is orange" << std::endl;
    }

    
    //sizeof()
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;


    //Printing out a bool
    //1 -->> true
    //0 -->> false
    std::cout << std::endl;
    std::cout << "orange_light : " << orange_light << std::endl;
    std::cout << "white_light : " << white_light << std::endl;


     std::cout << std::boolalpha;
   std::cout << "orange_light : " << orange_light << std::endl;
    std::cout << "white_light : " << white_light << std::endl;
}