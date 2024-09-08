#ifndef CIRCLE_SHAPE_H
#define CIRCLE_SHAPE_H

#include "Shape.h"

class CircleShape : public Shape {
public:
    CircleShape();                               // Constructor to set up the circle
    void draw(sf::RenderWindow& window) override; // Override draw method

private:
    sf::CircleShape m_circle;                    // SFML circle object
};

#endif // CIRCLE_SHAPE_H
