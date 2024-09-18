#include "Enemy.h"
#include "Position.h"
#include <iostream>

// Constructor definition (already defined inline in your header, but moving it to cpp)
Enemy::Enemy(int id, int maxHP, int currentHP, int attack, Position pos, std::string enemyType)
    : Entity(id, maxHP, currentHP, attack, pos), fEnemyType(enemyType) {}

// Attack method (overriding the base Entity's Attack method)
void Enemy::Attack(Entity& entity) {
    entity.SetCurrentHP(entity.GetCurrentHP() - fAttack);
    std::cout << fEnemyType << " attacked Entity " << entity.GetID() 
              << " for " << fAttack << " damage. Remaining HP: " 
              << entity.GetCurrentHP() << std::endl;
}

// Destructor
Enemy::~Enemy() {}
