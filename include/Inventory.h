#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>

class Inventory {
private:
    std::vector<Item*> fItems;  // Vector to hold all the items in the inventory

public:
    // Add an item to the inventory
    void AddItem(Item* item);

    // Remove an item from the inventory
    void RemoveItem(Item* item);

    // Equip an item
    void EquipItem(Item* item);

    // Use an item
    void UseItem(Item* item);

    // Destructor
    ~Inventory();
};

#endif // INVENTORY_H
