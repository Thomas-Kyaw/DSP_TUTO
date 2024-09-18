#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Room.h"
#include "Meowgolas.h"

class Game {
private:
    Room* currentRoom;  // The room where the player is currently
    Meowgolas* player;  // The player (Meowgolas)
    std::vector<Room*> rooms;  // All rooms in the game

public:
    // Constructor and Destructor
    Game();
    ~Game();

    // Game setup and control
    void StartGame();           // Initialize and start the game
    void EndGame();             // End the game
    void MovePlayer(int direction);  // Move player in a specified direction (NORTH, SOUTH, etc.)
    void HandleCombat(Enemy* enemy); // Handle combat with enemies
    void UseItem(Item* item);        // Use an item
    void InteractWithNPC(NPC* npc);  // Interact with an NPC
    void ChangeRoom(Room* newRoom);  // Change the current room
};

#endif // GAME_H
