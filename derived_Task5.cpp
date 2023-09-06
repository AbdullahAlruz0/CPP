/**
 * @file derived_Task5.cpp
 * @author Abdullah Alruz 
 * @brief this program finds the even and odd numbers in an array
 * @version 0.1
 * @date 2023-09-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 #include <array>
 
 int main() {
    std::array<int,9> arr{3,5,6,23,66,9,5,2,5000};
    auto counter{0};
    for(auto i: arr){
        if(i%2==0){
            std::cout<< "index["<<counter<< "] is even"<<std::endl;
        }
        else{
            std::cout<< "index["<<counter<< "] is odd"<<std::endl;
        }
        ++counter;
    }
     return 0;
 }