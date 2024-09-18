#ifndef POSITION_H
#define POSITION_H

// Struct for representing the position in 2D space
struct Position {
    int x;
    int y;

    Position();  // Default constructor
    Position(int x_val, int y_val);  // Parameterized constructor

    void move(int xOffset, int yOffset);  // Move method
};

#endif // POSITION_H
