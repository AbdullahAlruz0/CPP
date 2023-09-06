/**
 * @file derived_Task3.cpp
 * @author Abdullah Alruz 
 * @brief In this program a dynamic array were implemented using std::list, the program asks the user to enter an index to be deleted from the array.
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream>
#include<algorithm>
#include <list>

#define EXIT_COMMAND -1
void PrintArray(const std::list<int> arr);

int main() {
    auto userIndex{0};
    std::list<int> dyArr{5,9,9,7,4,2,1,54};
    auto deleteIndex=dyArr.begin();

    PrintArray( dyArr);

    std::cin>>userIndex;
    while(userIndex!= EXIT_COMMAND){
        std::cout<<"Write a valid index to delete an entry from the array(write -1 to exit):";
        if(userIndex< dyArr.size()){
            std::advance(deleteIndex, userIndex);
            dyArr.erase(deleteIndex);
        }
    }
    
    PrintArray( dyArr);


     return 0;
}
/**
 * @brief This function prints out the size and the elements of the given array of type std::list
 * 
 * @param arr The array to print
 */
void PrintArray(const std::list<int> arr){
    std::cout<<"Current array:"<<std::endl;
    for(auto i: arr){
        std::cout<<" "<<i;
    }
    std::cout<<std::endl;
    std::cout<<"Current size is "<<arr.size()<<std::endl;
}