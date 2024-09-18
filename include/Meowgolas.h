#ifndef MEOWGOLAS_H
#define MEOWGOLAS_H

#include "Entity.h"
#include "Weapon.h"
#include "Top.h"
#include "Inventory.h"
#include "Position.h"

class Meowgolas : public Entity {
private:
    Weapon* fWeapon;        // Pointer to equipped weapon
    Top* fTop;              // Pointer to equipped top (armor)
    Inventory fInventory;   // Inventory system

public:
    // Constructor
    Meowgolas(int id, int maxHP, int currentHP, int attack, Position pos);

    // Equip a weapon
    void EquipWeapon(Weapon* weapon);

    // Equip a top (armor)
    void EquipTop(Top* top);

    // Use an item
    void UseItem(Item* item);

    // Destructor
    ~Meowgolas();
};

#endif // MEOWGOLAS_H
