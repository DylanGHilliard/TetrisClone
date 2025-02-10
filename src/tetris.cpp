#include "raylib.h"
#include <iostream>
#include "tetris.h"




Tetris::Tetris()
{
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI | FLAG_WINDOW_RESIZABLE);


	InitWindow(1280, 720, "Tetris Clone");


}

void Tetris::run()
{
	while (!WindowShouldClose())		
	{
		BeginDrawing();
		
	

		ClearBackground(BLACK);
		
		DrawText("Hello Raylib", 200,200,20,WHITE);


		EndDrawing();
	}
	CloseWindow();
}