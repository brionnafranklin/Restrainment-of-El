#include "Game.h"
#include <raylib.h>



//Creates a Game and new Scene instance as its active Scene

Game::Game(int width, int height, char * title)
{
	Actor root;

	windowsizeX = width;
	windowsizeY = height;
	InitWindow(width, height, title);
	SetTargetFPS(0);

}

Game::~Game()
{
}

void Game::run()
{
}
//Creates a Game and new Scene instance as its active Scene


//Run the game loop
void Game::run()
{
	{
		//start audio device
		InitAudioDevice();

		


		//Update and draw until the game is over
		while (!WindowShouldClose())
		{


			//Change the Scene if needed
			//if (root != _next)
			//{
			//	_root = _next;
			//}

			//Start the Scene if needed
			if (!root.Started)
			{
				root.Start();
			}

			//Update the active Scene
			root.Update();


			//Draw the active Scene
			BeginDrawing();
			ClearBackground(BLACK);
			//Game Over Behavior
			if (gameover)
			{
				DrawText("GAME OVER\n Esc To Exit", windowsizeX / 2 - 150, windowsizeY / 2 - 100, 50, RED);
			}
			root.Draw();
			EndDrawing();
		}


		//End the game
		CloseWindow();
		CloseAudioDevice();
	}
}

