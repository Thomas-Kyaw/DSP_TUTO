#include "NPC.h"
#include "Position.h"
#include <iostream>

using namespace std;

// Constructor
NPC::NPC(int id, int maxHP, int currentHP, int attack, Position pos, std::string dialog)
    : Entity(id, maxHP, currentHP, attack, pos), fDialog(dialog) {}

// Interaction method
void NPC::Interact() {
    cout << "NPC says: " << fDialog << endl;
}

// Destructor
NPC::~NPC() {}
