/**
 * @file derived_Task7.cpp
 * @author Abdullah Alruz 
 * @brief this program utilizes lambda function for ascending and descending sorting
 * @version 0.1
 * @date 2023-09-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 #include <iostream>
 #include <algorithm>
 #include <array>

 void PrintArray(std::array<int,10> Arr);

 int main(){
    std::array<int,10>arr{9,3,6,5,2,0,4,8,7,1};
    //descending sorting
    std::sort(arr.begin(),arr.end(),[](auto x, auto y)-> auto { return x>y?true:false;});
    PrintArray(arr);
    std::cout<<std::endl;
    //ascending sorting
    std::sort(arr.begin(),arr.end(),[](auto x, auto y)-> auto { return x<y?true:false;});
    PrintArray(arr);
    return 0;
 }
/**
 * @brief 
 * 
 * @param Arr 
 */
 void PrintArray(std::array<int,10> pArr){
      for(auto i : pArr){
        std::cout<<i<<std::endl;
    }

 }