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

// In-class example
double midpoint(double a, double b)
{
    return (a + b) / 2.0;
}

int square(int n)
{
    return n*n;
}

int main()
{
    // You can follow along with any code in class here
    std::cout << "Give number: ";
    int x;
    std::cin >> x;
    
    std::cout << "The square of " << x << " is " square(x) << std::endl;
    
    return 0;
}
