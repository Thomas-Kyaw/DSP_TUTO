#ifndef NPC_H
#define NPC_H

#include "Entity.h"
#include "Position.h"
#include <string>

class NPC : public Entity {
private:
    std::string fDialog;  // NPC's dialog text

public:
    // Constructor
    NPC(int id, int maxHP, int currentHP, int attack, Position pos, std::string dialog);

    // Method to interact with the NPC
    void Interact();

    // Destructor
    ~NPC();
};

#endif // NPC_H
