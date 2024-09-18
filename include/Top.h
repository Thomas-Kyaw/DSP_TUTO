#ifndef TOP_H
#define TOP_H

#include "Item.h"

class Top : public Item {
private:
    int fDefense;  // Defense value of the top (armor)

public:
    Top(std::string name, int defense);
    int GetDefense() const;
    void Use() override;
};

#endif // TOP_H
