#include "raylib.h"

int main(int argc, char* argv[]) {

    // Window dimensions
    const int screenWidth = 800;
    const int screenHeight = 600;

    // Initialize window with anti-aliasing
    InitWindow(screenWidth, screenHeight, "Raylib Shapes");

    // Enable MSAA (Multi-Sample Anti-Aliasing)
    SetConfigFlags(FLAG_MSAA_4X_HINT);  // Enables 4x MSAA (Anti-aliasing)

    // Set FPS to 60
    SetTargetFPS(60);

    while (!WindowShouldClose())    // Main game loop
    {
        // Start drawing
        BeginDrawing();
        
        // Clear the background
        ClearBackground(RAYWHITE);

        // Draw the circle with Raylib (equivalent to SFML)
        DrawCircle(300, 300, 100, GREEN);  // (x, y, radius, color)

        // End drawing
        EndDrawing();
    }

    // Close the window and OpenGL context
    CloseWindow();    

    return 0;
}
