#include "Meowgolas.h"
#include <iostream>
#include "Position.h"

using namespace std;

// Constructor
Meowgolas::Meowgolas(int id, int maxHP, int currentHP, int attack, Position pos)
    : Entity(id, maxHP, currentHP, attack, pos), fWeapon(nullptr), fTop(nullptr) {}

// Equip a weapon
void Meowgolas::EquipWeapon(Weapon* weapon) {
    fWeapon = weapon;
    cout << "Weapon equipped: " << weapon->GetDamage() << " damage" << endl;
}

// Equip a top (armor)
void Meowgolas::EquipTop(Top* top) {
    fTop = top;
    cout << "Top equipped: " << top->GetDefense() << " defense" << endl;
}

// Use an item
void Meowgolas::UseItem(Item* item) {
    fInventory.UseItem(item);
}

Meowgolas::~Meowgolas() {
    // Only delete if fWeapon is dynamically allocated (allocated with `new`)
    // If it's stack-allocated (like the sword), do not delete it
    fWeapon = nullptr;  // Set to nullptr without deleting
    fTop = nullptr;  // Set to nullptr without deleting
}

