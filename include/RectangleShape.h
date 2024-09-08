#ifndef RECTANGLE_SHAPE_H
#define RECTANGLE_SHAPE_H

#include "Shape.h"

class RectangleShape : public Shape {
public:
    RectangleShape();                              // Constructor to set up the rectangle
    void draw(sf::RenderWindow& window) override;  // Override draw method

private:
    sf::RectangleShape m_rectangle;                // SFML rectangle object
};

#endif // RECTANGLE_SHAPE_H
