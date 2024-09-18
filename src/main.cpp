#include <iostream>
#include "Entity.h"
#include "Meowgolas.h"

int main() {
    // Create a Meowgolas (derived from Entity)
    Meowgolas player(1, 100, 100, 20, Position(5, 5));
    
    // Test the new PrintStat function and operator overloads
    std::cout << "Initial Player Stats:" << std::endl;
    std::cout << player;  // Using the overloaded << operator to print stats

    // Modify the player's fields using the >> operator
    std::cin >> player;  // Using the overloaded >> operator to input values

    // Print the updated stats
    std::cout << "Updated Player Stats:" << std::endl;
    std::cout << player;

    return 0;
}
