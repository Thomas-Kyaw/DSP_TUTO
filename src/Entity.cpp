#include "Entity.h"
#include "Position.h"

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

// Destructor
Entity::~Entity() {
    cout << "Entity destroyed" << endl;
}
