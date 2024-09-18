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

    // Ryu attacks Ken
    std::cout << "\nRyu attacks Ken!" << std::endl;
    Ryu >> Ken;

    // Display stats after the attack
    std::cout << "\nKen's Stats after attack:" << std::endl;
    std::cout << Ken;

    // Ken attacks Ryu
    std::cout << "\nKen attacks Ryu!" << std::endl;
    Ken >> Ryu;

    // Display stats after Ken's counterattack
    std::cout << "\nRyu's Stats after counterattack:" << std::endl;
    std::cout << Ryu;

    return 0;
}
