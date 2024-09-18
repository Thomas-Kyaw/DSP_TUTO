#include "Top.h"
#include <iostream>

Top::Top(std::string name, int defense)
    : Item(name, "A piece of clothing for defense"), fDefense(defense) {}

int Top::GetDefense() const {
    return fDefense;
}

void Top::Use() {
    std::cout << fName << " equipped, providing " << fDefense << " defense!" << std::endl;
}
