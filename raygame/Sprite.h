#pragma once
#include "raylib.h"

class Sprite
{
public:

	Sprite(char path[60]);

	float Width;
	float Height;

private:

	Texture2D texture;
	Image image;

};

