#include "Weapon.h"
#include <iostream>

Weapon::Weapon(std::string name, int damage)
    : Item(name, "A powerful weapon"), fDamage(damage) {}

int Weapon::GetDamage() const {
    return fDamage;
}

void Weapon::Use() {
    std::cout << fName << " used to attack, dealing " << fDamage << " damage!" << std::endl;
}
