#include "Food.h"
#include <iostream>

// Constructor
Food::Food(std::string name, int healingAmount)
    : Item(name, "A consumable food item"), fHealingAmount(healingAmount) {}

// Use method
void Food::Use() {
    std::cout << fName << " consumed, healing for " << fHealingAmount << " HP!" << std::endl;
}
