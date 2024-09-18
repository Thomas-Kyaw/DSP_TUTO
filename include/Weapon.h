#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item {
private:
    int fDamage;

public:
    Weapon(std::string name, int damage);
    int GetDamage() const;
    void Use() override;
};

#endif // WEAPON_H
