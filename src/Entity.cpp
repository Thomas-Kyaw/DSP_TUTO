#include "Entity.h"
#include "Position.h"
#include <iostream>
#include <sstream>

// Default constructor
Entity::Entity() : fID(0), fMaxHP(100), fCurrentHP(100), fAttack(10), fPosition(0, 0) {}

// Overloaded constructor
Entity::Entity(int id, int maxHP, int currentHP, int attack, Position pos)
    : fID(id), fMaxHP(maxHP), fCurrentHP(currentHP), fAttack(attack), fPosition(pos) {}

// Accessors
int Entity::GetID() const { return fID; }

Position Entity::GetPosition() const { return fPosition; }

void Entity::SetPosition(Position pos) { fPosition = pos; }

int Entity::GetMaxHP() const { return fMaxHP; }

void Entity::SetMaxHP(int maxHP) { fMaxHP = maxHP; }

int Entity::GetCurrentHP() const { return fCurrentHP; }

void Entity::SetCurrentHP(int currentHP) { fCurrentHP = currentHP; }

int Entity::GetAttack() const { return fAttack; }

void Entity::SetAttack(int attack) { fAttack = attack; }

// Attack another entity
void Entity::Attack(Entity& entity) {
    entity.SetCurrentHP(entity.GetCurrentHP() - fAttack);
    cout << "Entity " << fID << " attacked Entity " << entity.GetID() 
         << " for " << fAttack << " damage. Remaining HP: " 
         << entity.GetCurrentHP() << endl;
}

std::string Entity::GetMessage() const { return fMessage; }
void Entity::SetMessage(const std::string& message) { fMessage = message; }

// Print the entity's statistics
std::string Entity::PrintStat() const {
    std::ostringstream oss;
    oss << "ID: " << fID << "\n"
        << "Position: (" << fPosition.x << ", " << fPosition.y << ")\n"
        << "Max HP: " << fMaxHP << "\n"
        << "Current HP: " << fCurrentHP << "\n"
        << "Attack: " << fAttack << "\n"
        << "Message: " << fMessage << "\n";
    return oss.str();
}

// Overload the << operator to print the entity's stats
std::ostream& operator<<(std::ostream& os, const Entity& entity) {
    os << entity.PrintStat();
    return os;
}

// Overload the >> operator to parse commands and apply the appropriate changes
std::istream& operator>>(std::istream& is, Entity& entity) {
    std::string command;
    is >> command;

    if (command == "Damage") {
        int value;
        is >> value;
        entity.fCurrentHP -= value;
        if (entity.fCurrentHP < 0) entity.fCurrentHP = 0;
        entity.fMessage = "Damage " + std::to_string(value);
    } 
    else if (command == "Heal") {
        int value;
        is >> value;
        entity.fCurrentHP += value;
        if (entity.fCurrentHP > entity.fMaxHP) entity.fCurrentHP = entity.fMaxHP;
        entity.fMessage = "Heal " + std::to_string(value);
    } 
    else if (command == "Move") {
        int xOffset, yOffset;
        is >> xOffset >> yOffset;
        entity.fPosition.move(xOffset, yOffset);
        entity.fMessage = "Move " + std::to_string(xOffset) + " " + std::to_string(yOffset);
    } 
    else {
        std::cerr << "Unknown command: " << command << std::endl;
    }

    return is;
}

// Destructor
Entity::~Entity() {
    cout << "Entity destroyed" << endl;
}
