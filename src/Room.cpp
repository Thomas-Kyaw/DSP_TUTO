#include "Room.h"
#include <iostream>

// Constructor
Room::Room(std::string description)
    : fDescription(description), fIsCleared(false) {
    for (int i = 0; i < 4; ++i) {
        exits[i] = nullptr;  // Initialize exits to null
    }
}

// Set room description
void Room::SetDescription(const std::string& description) {
    fDescription = description;
}

// Get room description
std::string Room::GetDescription() const {
    return fDescription;
}

// Add enemy to room
void Room::AddEnemy(Enemy* enemy) {
    fEnemies.push_back(enemy);
}

// Add NPC to room
void Room::AddNPC(NPC* npc) {
    fNPCs.push_back(npc);
}

// Add item to room
void Room::AddItem(Item* item) {
    fItems.push_back(item);
}

// Set exit room (0 = NORTH, 1 = SOUTH, 2 = EAST, 3 = WEST)
void Room::SetExit(int direction, Room* room) {
    if (direction >= 0 && direction < 4) {
        exits[direction] = room;
    }
}

// Get exit room
Room* Room::GetExit(int direction) const {
    if (direction >= 0 && direction < 4) {
        return exits[direction];
    }
    return nullptr;
}

// Check if room is cleared
bool Room::IsCleared() const {
    return fIsCleared;
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
