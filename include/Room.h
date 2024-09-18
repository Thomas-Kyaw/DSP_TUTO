#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include "Enemy.h"
#include "NPC.h"
#include "Item.h"

class Room {
private:
    std::string fDescription;  // Description of the room
    bool fIsCleared;           // Indicates if the room is cleared
    std::vector<Enemy*> fEnemies;  // Vector of enemies in the room
    std::vector<NPC*> fNPCs;       // Vector of NPCs in the room
    std::vector<Item*> fItems;     // Vector of items in the room
    Room* exits[4];               // Exits pointing to 4 different rooms (NORTH, SOUTH, EAST, WEST)

public:
    Room(std::string description);  // Constructor

    void SetDescription(const std::string& description);  // Set description
    std::string GetDescription() const;  // Get description

    void AddEnemy(Enemy* enemy);  // Add an enemy to the room
    void AddNPC(NPC* npc);        // Add an NPC to the room
    void AddItem(Item* item);     // Add an item to the room

    void SetExit(int direction, Room* room);  // Set exit for room
    Room* GetExit(int direction) const;       // Get exit from room

    bool IsCleared() const;  // Check if room is cleared
    ~Room();  // Destructor
};

#endif // ROOM_H
