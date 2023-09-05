/**
 * @file derived_Task2.cpp
 * @author Abdullah Alruz 
 * @brief 
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<array>
#include<algorithm>

#define ARRAY_SIZE 30u

static const std::array <int,ARRAY_SIZE>myNumbersDB{23, -56, 12, -45, 78, -34, 9, -67, 3, -88, 17, -71, 41, -55, 29, -63, 5, -92, 38, -14, -6, -33, 50, 66, -77, 21, -10, 85, -48, 94};

void searchNum(){
    int input{};
    std::cout<< "Hello Mr/Ms user,\n"<<"Please enter an int number which you want to search about in my DB:"<<std::endl;
    std::cin>> input;
   while(1){
       auto result= std::find(myNumbersDB.begin(),myNumbersDB.end(),input);
    if(result==myNumbersDB.end()){
        std::cout<<"Entry "<<input<< " is not found!"<<std::endl;
    }
    else{
        std::cout<<"The entry "<< input<< " you're looking for is at index ["<< result + ARRAY_SIZE - myNumbersDB.end()<<"]"<<std::endl;
    }
    std::cout<<"Please enter an int number which you want to search about in my DB, Ctrl+c to exit:"<<std::endl;
    std::cin>> input;
   }}
 

int main() {
    searchNum();
     return 0;
}