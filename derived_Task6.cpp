/**
 * @file derived_Task6.cpp
 * @author Abdullah Alruz 
 * @brief this program utilieses lambda function for finding the square of a number 
 * @version 0.1
 * @date 2023-09-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>

 int main(){
    auto square = [](auto a) -> auto{return a*a;};
    std::cout<<square(9)<< std::endl <<square(23.5)<<std::endl;
    return 0;
 }