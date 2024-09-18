#include <iostream>
#include "Meowgolas.h"
#include "Enemy.h"
#include "NPC.h"
#include "Room.h"
#include "Weapon.h"
#include "Top.h"
#include "Food.h"
#include "Directions.h"

int main() {
    // Create a Meowgolas (player character)
    Meowgolas player(1, 100, 100, 20, Position(5, 5));
    std::cout << "Meowgolas created with ID: " << player.GetID() << " at position (" 
              << player.GetPosition().x << ", " << player.GetPosition().y << ")" << std::endl;

    // Create an Enemy
    Enemy enemy(2, 50, 50, 10, Position(3, 3), "Orc");
    std::cout << "Enemy created with ID: " << enemy.GetID() << " at position (" 
              << enemy.GetPosition().x << ", " << enemy.GetPosition().y << ")" << std::endl;

    // Create an NPC
    NPC npc(3, 80, 80, 0, Position(10, 10), "Welcome to the world!");
    std::cout << "NPC created with ID: " << npc.GetID() << " at position (" 
              << npc.GetPosition().x << ", " << npc.GetPosition().y << ")" << std::endl;

    // Interact with the NPC
    npc.Interact();

    // Create items for Meowgolas
    Weapon sword("Sword", 15);
    Top armor("Armor", 5);
    Food apple("Apple", 10);

    // Equip Meowgolas with items
    player.EquipWeapon(&sword);
    player.EquipTop(&armor);
    std::cout << "Meowgolas is now equipped with a weapon and armor." << std::endl;

    // Use food item
    std::cout << "Meowgolas uses a food item: ";
    player.UseItem(&apple);

    // Create Rooms
    Room* room1 = new Room("The Entrance");
    Room* room2 = new Room("The Dark Hall");
    Room* room3 = new Room("The Treasure Chamber");
    
    // Set exits for rooms (NORTH = 0, SOUTH = 1, EAST = 2, WEST = 3)
    room1->SetExit(NORTH, room2);
    room2->SetExit(SOUTH, room1);
    room2->SetExit(EAST, room3);
    room3->SetExit(WEST, room2);

    // Add entities to rooms
    room1->AddEnemy(&enemy);
    room2->AddNPC(&npc);
    room3->AddItem(&sword);
    room3->AddItem(&apple);

    // Simulate attack from Meowgolas to enemy
    std::cout << "Meowgolas attacks the enemy:" << std::endl;
    player.Attack(enemy);
    std::cout << "Enemy HP after attack: " << enemy.GetCurrentHP() << std::endl;

    // Test room navigation
    Room* currentRoom = room1;
    std::cout << "You are in: " << currentRoom->GetDescription() << std::endl;

    // Move north to room2
    currentRoom = currentRoom->GetExit(NORTH);
    if (currentRoom != nullptr) {
        std::cout << "You move north to: " << currentRoom->GetDescription() << std::endl;
    }

    // Move east to room3
    currentRoom = currentRoom->GetExit(EAST);
    if (currentRoom != nullptr) {
        std::cout << "You move east to: " << currentRoom->GetDescription() << std::endl;
    }

    // Clean up dynamically allocated rooms
    delete room1;
    delete room2;
    delete room3;

    return 0;
}
