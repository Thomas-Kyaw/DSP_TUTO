#include "Item.h"

// Default constructor
Item::Item() : fName("Unknown"), fDescription("No description") {}

// Parameterized constructor
Item::Item(std::string name, std::string description)
    : fName(name), fDescription(description) {}

// Use method
void Item::Use() {
    std::cout << fName << " used!" << std::endl;
}

// Getter for item name
std::string Item::GetName() const {
    return fName;
}

// Destructor
Item::~Item() {
    std::cout << fName << " destroyed!" << std::endl;
}
