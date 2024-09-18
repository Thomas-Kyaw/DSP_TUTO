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

// PrintStat method to return all field information as a string
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

// Overloading the << operator for printing the entity's stats
std::ostream& operator<<(std::ostream& os, const Entity& entity) {
    os << entity.PrintStat();
    return os;
}

// Overloading the >> operator for inputting values into the entity
std::istream& operator>>(std::istream& is, Entity& entity) {
    std::cout << "Enter ID: ";
    is >> entity.fID;
    std::cout << "Enter Max HP: ";
    is >> entity.fMaxHP;
    std::cout << "Enter Current HP: ";
    is >> entity.fCurrentHP;
    std::cout << "Enter Attack: ";
    is >> entity.fAttack;
    std::cout << "Enter Message: ";
    is.ignore();  // To ignore the newline character after reading int
    std::getline(is, entity.fMessage);  // Read the whole line for the message
    return is;
}

// Destructor
Entity::~Entity() {
    cout << "Entity destroyed" << endl;
}
