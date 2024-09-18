#include "Game.h"
#include "Directions.h"
#include <iostream>

Game::Game() : currentRoom(nullptr), player(nullptr) {}

Game::~Game() {
    delete player;
    for (Room* room : rooms) {
        delete room;
    }
}

void Game::StartGame() {
    // Initialize player (Meowgolas)
    player = new Meowgolas(1, 100, 100, 20, Position(0, 0));  // Start at (0, 0)

    // Create and initialize rooms
    Room* room1 = new Room("The Entrance");
    Room* room2 = new Room("The Dark Hall");
    Room* room3 = new Room("The Treasure Chamber");

    // Set exits (NORTH, SOUTH, EAST, WEST are defined in Directions.h as ENUMs)
    room1->SetExit(NORTH, room2);
    room2->SetExit(SOUTH, room1);
    room2->SetExit(EAST, room3);
    room3->SetExit(WEST, room2);

    // Add rooms to the game
    rooms.push_back(room1);
    rooms.push_back(room2);
    rooms.push_back(room3);

    // Set the current room to room1
    currentRoom = room1;

    // Game Start
    std::cout << "Welcome to the game! You are in " << currentRoom->GetDescription() << std::endl;
}

void Game::EndGame() {
    std::cout << "Game Over!" << std::endl;
}

void Game::MovePlayer(int direction) {
    Room* nextRoom = currentRoom->GetExit(direction);
    if (nextRoom != nullptr) {
        ChangeRoom(nextRoom);
        std::cout << "You move to: " << currentRoom->GetDescription() << std::endl;
    } else {
        std::cout << "You can't move in that direction!" << std::endl;
    }
}

void Game::HandleCombat(Enemy* enemy) {
    // Player attacks enemy
    player->Attack(*enemy);
    std::cout << "Player attacked the enemy! Enemy HP: " << enemy->GetCurrentHP() << std::endl;

    // If enemy is defeated
    if (enemy->GetCurrentHP() <= 0) {
        std::cout << "Enemy defeated!" << std::endl;
        currentRoom->RemoveEnemy(enemy);
    } else {
        // Enemy attacks back
        enemy->Attack(*player);
        std::cout << "Enemy attacked back! Player HP: " << player->GetCurrentHP() << std::endl;

        // Check if player is defeated
        if (player->GetCurrentHP() <= 0) {
            EndGame();
        }
    }
}

void Game::UseItem(Item* item) {
    player->UseItem(item);
}

void Game::InteractWithNPC(NPC* npc) {
    npc->Interact();
}

void Game::ChangeRoom(Room* newRoom) {
    currentRoom = newRoom;
}
