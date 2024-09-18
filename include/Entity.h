#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <string>
#include "Position.h"
using namespace std;

class Entity {
protected:
    int fID;             // Unique identifier for this entity
    Position fPosition;  // Position in the game world
    int fMaxHP;          // Maximum health points
    int fCurrentHP;      // Current health points
    int fAttack;         // Attack damage
    std::string fMessage;  // Field to store the last command message

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

    std::string GetMessage() const;
    void SetMessage(const std::string& message);

    // Print the entity's statistics
    std::string PrintStat() const;

    // Overloading the << operator (for printing)
    friend std::ostream& operator<<(std::ostream& os, const Entity& entity);

    // Overloading the >> operator (for entity vs entity interaction)
    friend Entity& operator>>(Entity& attacker, Entity& defender);

    // Destructor
    virtual ~Entity();
};

#endif // ENTITY_H
