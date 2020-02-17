#pragma once
#include "Actor.h"
class Game
{
public:

	Game(int width, int height);
	~Game();
	void run();
	Actor root;
	int windowsizeX;
	int windowsizeY;
	bool gameover;
	char* name;
};

