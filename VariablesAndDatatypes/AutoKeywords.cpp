#include<iostream>

int main (){

    auto variable1{23};      // int
    auto variable2{46.8};   //double
    auto variable3{45.6f};  // float
    auto variable4{23.0l};  //long double
    auto variable5{'r'};    //chararter


    //int modifier suffix

    auto variable6{  123u}; //unsigned
    auto variable7{545ul};  //unsigend long
    auto variable8{645ll}; //long long

     std::cout << "variable1 occupies : " << sizeof(variable1) << " bytes" << std::endl;
     std::cout << "variable2 occupies : " << sizeof(variable2) << " bytes" << std::endl;
     std::cout << "variable3 occupies : " << sizeof(variable3) << " bytes" << std::endl;
     std::cout << "variable4 occupies : " << sizeof(variable4) << " bytes" << std::endl;
     std::cout << "variable5 occupies : " << sizeof(variable5) << " bytes" << std::endl;
     std::cout << "variable6 occupies : " << sizeof(variable6) << " bytes" << std::endl;
     std::cout << "variable7 occupies : " << sizeof(variable7) << " bytes" << std::endl;
     std::cout << "variable8 occupies : " << sizeof(variable8) << " bytes" << std::endl;

}