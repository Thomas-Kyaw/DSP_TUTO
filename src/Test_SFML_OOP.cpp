#include <SFML/Graphics.hpp>
#include "CircleShape.h"
#include "RectangleShape.h"

int main(int argc, char* argv[]) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Shapes");

    CircleShape circle;
    RectangleShape rectangle;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        circle.draw(window);         // Draw the circle
        rectangle.draw(window);      // Draw the rectangle
        window.display();
    }

    return 0;
}
