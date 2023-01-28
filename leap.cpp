/*
Author: Torrance Khandaker
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Lab1C

The program identifies whether a user-provided year is a leap year or not.
*/

#include <iostream>

int main() {
    int year;
    bool leapOrCommon;
    std::cout << "Enter a year: ";
    std::cin >> year;
    
    if (!(year % 4 == 0 )) leapOrCommon = false;
    else if (!(year % 100 == 0)) leapOrCommon = true;
    else if (!(year % 400 == 0)) leapOrCommon = false;
    else leapOrCommon = true;

    std::cout << "It is a " << (leapOrCommon ? "leap year.\n" : "common year.\n");
    return 0;
}