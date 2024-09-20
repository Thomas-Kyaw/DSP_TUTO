#include <iostream>
#include <sstream>
#include "Entity.h"
#include "Meowgolas.h"

int main() {
    // Create Ryu and Ken with identical stats
    Entity Ryu(1, 100, 100, 30, Position(5, 5));
    Entity Ken(2, 100, 100, 30, Position(7, 7));
    
    // Display initial stats for both entities
    std::cout << "Ryu's Stats:" << std::endl;
    std::cout << Ryu;
    std::cout << "\nKen's Stats:" << std::endl;
    std::cout << Ken;

    // Game loop continues until one of the entities reaches 0 or below HP
    while (Ryu.GetCurrentHP() > 0 && Ken.GetCurrentHP() > 0) {
        // Ryu attacks Ken
        std::cout << "\nRyu attacks Ken!" << std::endl;
        Ryu >> Ken;

        // Display stats after the attack
        std::cout << "\nKen's Stats after attack:" << std::endl;
        std::cout << Ken;

        // Check if Ken is defeated
        if (Ken.GetCurrentHP() <= 0) {
            std::cout << "\nKen has been defeated! Ryu wins!" << std::endl;
            break;
        }

        // Ken attacks Ryu
        std::cout << "\nKen attacks Ryu!" << std::endl;
        Ken >> Ryu;

        // Display stats after Ken's counterattack
        std::cout << "\nRyu's Stats after counterattack:" << std::endl;
        std::cout << Ryu;

        // Check if Ryu is defeated
        if (Ryu.GetCurrentHP() <= 0) {
            std::cout << "\nRyu has been defeated! Ken wins!" << std::endl;
            break;
        }
    }

    return 0;
}
