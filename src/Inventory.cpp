#include "Inventory.h"
#include <algorithm>
#include <iostream>

// Add an item to the inventory
void Inventory::AddItem(Item* item) {
    fItems.push_back(item);
}

// Remove an item from the inventory
void Inventory::RemoveItem(Item* item) {
    auto it = std::remove(fItems.begin(), fItems.end(), item);
    if (it != fItems.end()) {
        fItems.erase(it);
    }
}

// Equip an item
void Inventory::EquipItem(Item* item) {
    std::cout << "Equipped " << item->GetName() << std::endl;
}

// Use an item
void Inventory::UseItem(Item* item) {
    item->Use();
}

// Destructor
Inventory::~Inventory() {
    for (Item* item : fItems) {
        delete item;
    }
}
