/**
 * @file derived_Task4.cpp
 * @author Abdullah Alruz 
 * @brief In this program I used forward_list to merge to arrays 
 * @version 0.1
 * @date 2023-09-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <forward_list>

void PrintArray(const std::forward_list<int> arr);

int main() {
    std::forward_list<int> dyArr1{5,9,9,7,4,2,1,54};
    std::forward_list<int> dyArr2{77,88,99,33,-11,22,-44,44};

    PrintArray( dyArr1);
    dyArr1.merge(dyArr2);
    PrintArray( dyArr1);

    return 0;
}
/**
 * @brief This function prints out the size and the elements of the given array of type std::forward_list
 * 
 * @param arr The array to print
 */
void PrintArray(const std::forward_list<int> arr){
    std::cout<<"Current size is "<<std::distance(arr.begin() , arr.end())<<std::endl;
    std::cout<<"Current array:"<<std::endl;
    for(auto i: arr){
        std::cout<<" "<<i;
    }
    std::cout<<std::endl;
}