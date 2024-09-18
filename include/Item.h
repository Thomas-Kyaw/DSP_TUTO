#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
protected:
    std::string fName;         // Name of the item
    std::string fDescription;  // Description of the item

public:
    Item();  // Default constructor
    Item(std::string name, std::string description);  // Parameterized constructor

    virtual void Use();  // Virtual method to use the item
    std::string GetName() const;  // Getter for item name
    virtual ~Item();  // Virtual destructor
};

#endif // ITEM_H
