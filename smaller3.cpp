/*
Author: Torrance Khandaker
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Lab1B

The program compares three user-provided numbers and tells them what the smallest of them is.
*/

#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter a number: ";
    std::cin >> num1;
    std::cout << "Enter another number: ";
    std::cin >> num2;
    std::cout << "Enter a third number: ";
    std::cin >> num3;

    std::cout << "The smallest number is: " << (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3)) << '\n';
    
    return 0;
}