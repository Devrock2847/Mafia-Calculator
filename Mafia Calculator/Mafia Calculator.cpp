// Mafia Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main() {
    double players = 10.0;
    double mafia = 2.0;

    double percentage = mafia / (sqrt(players));
    std::cout << percentage << std::endl;
}