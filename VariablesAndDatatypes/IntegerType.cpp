#include<iostream>
int main()
{
    //Braced initializer
   /* int car_count{}; //initializes to zero
    int bus_count{5};//initializes to 5
    int truck_count{7}; //initializes to 7

    std::cout<<car_count<<std::endl<<bus_count<<std::endl<<truck_count;
*/

// Functional initialization
/*
int apple_count(5);
int orange_count(10);
std::cout<<"fruit_count is :"<<(apple_count+orange_count)<<std::endl;
*/

// assigment notation
/*
int lion_count=5;
int elephant_count=7;
std::cout<<"animal_count is :"<<lion_count+elephant_count<<std::endl;
*/

// Check the size with sizeof

std::cout<<"sizeof int is :"<<sizeof(int)<<std::endl;
return 0;
}