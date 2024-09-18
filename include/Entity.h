#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include "Position.h"
using namespace std;

class Entity {
protected:
    int fID;             // Unique identifier for this entity
    Position fPosition;  // Position in the game world
    int fMaxHP;          // Maximum health points
    int fCurrentHP;      // Current health points
    int fAttack;         // Attack damage

public:
    // Constructors
    Entity();
    Entity(int id, int maxHP, int currentHP, int attack, Position pos);

    // Accessors (Getters and Setters)
    int GetID() const;
    Position GetPosition() const;
    void SetPosition(Position pos);

    int GetMaxHP() const;
    void SetMaxHP(int maxHP);

    int GetCurrentHP() const;
    void SetCurrentHP(int currentHP);

    int GetAttack() const;
    void SetAttack(int attack);

    // Attack another entity
    virtual void Attack(Entity& entity);

    // Destructor
    virtual ~Entity();
};

#endif // ENTITY_H
