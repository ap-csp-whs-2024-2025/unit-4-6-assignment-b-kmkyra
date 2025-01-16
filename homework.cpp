/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

//int isPrime(int x)
//{

//}

int averageList(std::vector<double> list)
{
    int index = 0;
    double sum;
    while(index <= list.size()) 
    {
      sum = list[index] + list[index+1];
    }
    return sum/2;
}

int main()
{
    // Complete your homework here
    std::vector<double> foo = {1, 2, 3, 4, 5};
    averageList(foo);
    
    return 0;
}
