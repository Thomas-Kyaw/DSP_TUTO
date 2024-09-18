#ifndef FOOD_H
#define FOOD_H

#include "Item.h"

class Food : public Item {
private:
    int fHealingAmount;  // Healing amount the food provides

public:
    Food(std::string name, int healingAmount);
    void Use() override;
};

#endif // FOOD_H
