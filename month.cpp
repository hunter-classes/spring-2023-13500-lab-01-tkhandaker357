/*
Author: Torrance Khandaker
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Lab1D

The program compares three user-provided numbers and tells them what the smallest of them is.
*/

#include <iostream>

int main() {
    int month, year, daysInMonth;
    bool leapOrCommon;

    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << "Enter number of a month: ";
    std::cin >> month;

    if (!(year % 4 == 0 )) leapOrCommon = false;
    else if (!(year % 100 == 0)) leapOrCommon = true;
    else if (!(year % 400 == 0)) leapOrCommon = false;
    else leapOrCommon = true;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) daysInMonth = 31;
    else if (month == 2) (leapOrCommon ? daysInMonth = 29 : daysInMonth = 28);
    else if (month == 4 || month == 6 || month == 9 || month == 11) daysInMonth = 30;

    std::cout << "The month has " << daysInMonth << " days.\n";
    return 0;
}