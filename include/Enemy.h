#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"
#include "Position.h"
#include <string>

class Enemy : public Entity {
private:
    std::string fEnemyType;

public:
    // Constructor
    Enemy(int id, int maxHP, int currentHP, int attack, Position pos, std::string enemyType);

    // Override the attack method
    void Attack(Entity& entity) override;

    // Destructor
    ~Enemy();
};

#endif // ENEMY_H
