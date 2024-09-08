#ifndef SHAPE_H
#define SHAPE_H

#include <SFML/Graphics.hpp>

class Shape {
public:
    virtual void draw(sf::RenderWindow& window) = 0;  // Abstract method for drawing
    virtual ~Shape() = default;                       // Virtual destructor
};

#endif // SHAPE_H
