#include "CircleShape.h"

CircleShape::CircleShape() {
    m_circle.setRadius(50.f);
    m_circle.setFillColor(sf::Color::Green);
    m_circle.setPosition(100.f, 100.f);
}

void CircleShape::draw(sf::RenderWindow& window) {
    window.draw(m_circle);
}
