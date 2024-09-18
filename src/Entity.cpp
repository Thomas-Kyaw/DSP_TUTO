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

// Overload the >> operator for one entity attacking another
Entity& operator>>(Entity& attacker, Entity& defender) {
    // Reduce the defender's HP by the attacker's attack value
    defender.fCurrentHP -= attacker.GetAttack();
    
    // Set the message to reflect the attack
    attacker.fMessage = "Attacked " + std::to_string(defender.GetID());
    defender.fMessage = "Defended against " + std::to_string(attacker.GetID());

    // Print attack result
    std::cout << attacker.fMessage << ": -" << attacker.GetAttack() << " HP to Entity " << defender.GetID() << std::endl;
    std::cout << "Entity " << defender.GetID() << " HP: " << defender.fCurrentHP << std::endl;

    // If either attacker or defender reaches 0 or below HP, end the game
    if (defender.fCurrentHP <= 0) {
        std::cout << "Entity " << defender.GetID() << " has been defeated. Game over." << std::endl;
    } 
    if (attacker.fCurrentHP <= 0) {
        std::cout << "Entity " << attacker.GetID() << " has been defeated. Game over." << std::endl;
    }

    return attacker;
}

// Destructor
Entity::~Entity() {
    cout << "Entity destroyed" << endl;
}
