#include<iostream>
#include "header.h"

int main()
{
    std::string day;
    int number; 
    std::cin >> day >> number;
    if (days(day, number))
       std:: cout << "good" << std::endl; 
    else
        std:: cout << "bad(" << std::endl;
        
    return 0;
}
