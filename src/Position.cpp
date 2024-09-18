#include "Position.h"

// Default constructor
Position::Position() : x(0), y(0) {}

// Parameterized constructor
Position::Position(int x_val, int y_val) : x(x_val), y(y_val) {}

// Move method
void Position::move(int xOffset, int yOffset) {
    x += xOffset;
    y += yOffset;
}
