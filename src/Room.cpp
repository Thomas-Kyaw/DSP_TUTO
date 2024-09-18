#include "Room.h"
#include <iostream>

Room::Room(const std::string& desc) : description(desc), isCleared(false) {
    // Initialize exits to null
    for (int i = 0; i < 4; ++i) {
        exits[i] = nullptr;
    }
}

void Room::SetExit(int direction, Room* room) {
    if (direction >= 0 && direction < 4) {
        exits[direction] = room;
    }
}

Room* Room::GetExit(int direction) const {
    if (direction >= 0 && direction < 4) {
        return exits[direction];
    }
    return nullptr;
}

void Room::AddEnemy(Enemy* enemy) {
    fEnemies.push_back(enemy);
}

void Room::AddNPC(NPC* npc) {
    fNPCs.push_back(npc);
}

void Room::AddItem(Item* item) {
    fItems.push_back(item);
}

void Room::RemoveEnemy(Enemy* enemy) {
    fEnemies.erase(std::remove(fEnemies.begin(), fEnemies.end(), enemy), fEnemies.end());
}

bool Room::CheckRoomClear() const {
    return fEnemies.empty();
}

std::string Room::GetDescription() const {
    return description;
}

// Destructor
Room::~Room() {
    for (Enemy* enemy : fEnemies) {
        // Do NOT delete stack-allocated enemies
        // Only delete if dynamically allocated with 'new'
        enemy = nullptr;  // Just set the pointer to nullptr, don't delete
    }
    for (NPC* npc : fNPCs) {
        npc = nullptr;  // Don't delete stack-allocated NPCs
    }
    for (Item* item : fItems) {
        item = nullptr;  // Don't delete stack-allocated items
    }
}