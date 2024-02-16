//This is a calculator created for the social deduction game Mafia
//It calculates the percentage chance of the Mafia players winning the game
#include <iostream>
#include <cmath>

int main() {
    double players = 10.0;
    double mafia = 2.0;
    double percentage = mafia / (sqrt(players));
    std::cout << percentage << std::endl;
}