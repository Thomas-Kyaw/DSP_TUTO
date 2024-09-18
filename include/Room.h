#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include "Enemy.h"
#include "NPC.h"
#include "Item.h"
#include "Directions.h"

class Room {
private:
    std::string description;
    std::vector<Enemy*> fEnemies;
    std::vector<Item*> fItems;
    std::vector<NPC*> fNPCs;
    Room* exits[4];  // Exits to other rooms (NORTH, SOUTH, EAST, WEST)
    bool isCleared;

public:
    // Constructor
    Room(const std::string& desc);
    ~Room();  // Destructor

    // Room management
    void SetExit(int direction, Room* room);
    Room* GetExit(int direction) const;
    void AddEnemy(Enemy* enemy);
    void AddNPC(NPC* npc);
    void AddItem(Item* item);
    void RemoveEnemy(Enemy* enemy);
    bool CheckRoomClear() const;
    std::string GetDescription() const;
};

#endif // ROOM_H
