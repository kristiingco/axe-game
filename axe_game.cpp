#include "raylib.h"
int main() {
    int width = 350;
    int height = 200;

    InitWindow(width, height, "Axe Game");

    int circle_x = 175;
    int circle_y = 100;

    SetTargetFPS(60);
    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(WHITE);

        // GAME LOGIC BEGINS 

        DrawCircle(circle_x, circle_y, 25, BLUE);

        if (IsKeyDown(KEY_D) && circle_x < 350) {
            circle_x = circle_x + 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0) {
            circle_x = circle_x - 10;
        }

        // GAME LOGIC ENDS 


        EndDrawing();
    }
    

}