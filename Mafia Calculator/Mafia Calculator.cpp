//This is a calculator created for the social deduction game Mafia
//It calculates the percentage chance of the Mafia players winning the game
#include <iostream>
#include <cmath>

int main() {
    //Update this with player and mafia numbers
    double players = 10.0;
    double mafia = 2.0;

    double percentage = mafia / (sqrt(players));
    std::cout << "Mafia has " << percentage  << "% chance of victory" << std::endl;
}