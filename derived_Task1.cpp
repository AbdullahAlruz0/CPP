/**
 * @file main.cpp
 * @author Abdullah Alruz 
 * @brief This program is using std::max_element from <algorithm> to find and print the max number in an std::array
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <array>
#include <algorithm>

template <std::size_t T>
void PrintMax(const std::array<int, T > &targetArr) {
   auto maxNum= std::max_element(targetArr.begin(), targetArr.end());
   std::cout<< *maxNum<<std::endl;
   }

int main(){
    std::array<int,5>arr={1,-6,0,99,15};
    PrintMax(arr); // max is 99
    std::array<int,7>arr2={-80,-6,-585,-63,-15000,-33,-7};
    PrintMax(arr2); // max is -6
    return 0;
}
