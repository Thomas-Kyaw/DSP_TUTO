#ifndef CATNIP_H
#define CATNIP_H

#include "Item.h"

class Catnip : public Item {
private:
    int fAttackBoost;

public:
    Catnip(std::string name, int attackBoost)
        : Item(name, "A consumable item that boosts attack"), fAttackBoost(attackBoost) {}

    void Use() override {
        std::cout << fName << " consumed, boosting attack by " << fAttackBoost << "!" << std::endl;
    }
};

#endif // CATNIP_H
