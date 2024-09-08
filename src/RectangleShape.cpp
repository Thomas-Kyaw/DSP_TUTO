#include "RectangleShape.h"

RectangleShape::RectangleShape() {
    m_rectangle.setSize(sf::Vector2f(120.f, 60.f));
    m_rectangle.setFillColor(sf::Color::Red);
    m_rectangle.setPosition(300.f, 100.f);
}

void RectangleShape::draw(sf::RenderWindow& window) {
    window.draw(m_rectangle);
}
