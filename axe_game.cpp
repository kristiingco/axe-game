#include "raylib.h"
int main() {
    int width = 800;
    int height = 450;

    InitWindow(width, height, "Axe Game");

    int circle_x = 200;
    int circle_y = 200;
    int circle_radius = 25;

    int l_circle_x = circle_x - circle_radius;
    int r_circle_x = circle_x + circle_radius;
    int u_circle_y = circle_y - circle_radius;
    int b_circle_y = circle_y + circle_radius;

    int axe_x = 400;
    int axe_y = 0;
    int axe_length = 50;

    int l_axe_x = axe_x;
    int r_axe_x = axe_x + axe_length;
    int u_axe_y = axe_y;
    int b_axe_y = axe_y + axe_length;

    int direction = 10;
    SetTargetFPS(60);
    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(WHITE);

        // GAME LOGIC BEGINS 

        DrawCircle(circle_x, circle_y, circle_radius, BLUE);
        DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);

        // MOVE AXE
        axe_y += direction;
        if(axe_y > height || axe_y < 0) {
            direction *= -1;
        }

        if (IsKeyDown(KEY_D) && circle_x < width) {
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0) {
            circle_x -= 10;
        }

        // GAME LOGIC ENDS 


        EndDrawing();
    }
    

}