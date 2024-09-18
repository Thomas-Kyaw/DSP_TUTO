#include <iostream>
#include <sstream>
#include "Entity.h"
#include "Meowgolas.h"

int main() {
    // Create a Meowgolas (derived from Entity)
    Meowgolas player(1, 100, 100, 20, Position(5, 5));
    
    // Display initial player stats
    std::cout << "Initial Player Stats:" << std::endl;
    std::cout << player;

    // Test Damage command
    std::istringstream damageCommand("Damage 30");
    damageCommand >> player;
    std::cout << "\nAfter Damage Command (30 points):" << std::endl;
    std::cout << player;

    // Test Heal command
    std::istringstream healCommand("Heal 20");
    healCommand >> player;
    std::cout << "\nAfter Heal Command (20 points):" << std::endl;
    std::cout << player;

    // Test Move command
    std::istringstream moveCommand("Move 3 4");
    moveCommand >> player;
    std::cout << "\nAfter Move Command (+3, +4):" << std::endl;
    std::cout << player;

    return 0;
}
