/*
Author: Torrance Khandaker
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Lab1A

The program compares two user-provided numbers and tells them what the smallest of them is.
*/

#include <iostream>

int main() {
    int firstNum, secondNum;
    
    std::cout << "Enter one number: ";
    std::cin >> firstNum;
    std::cout << "Enter another number: ";
    std::cin >> secondNum;
    
    std::cout << "The smaller of the two numbers is: " << (firstNum < secondNum ? firstNum : secondNum) << std::endl;;

    return 0;
}