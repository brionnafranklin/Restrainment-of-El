#pragma once
#include "raylib.h"
#include "Actor.h"

class Sprite : public Actor
{
public:

	Sprite(char path[60]);

	void Draw() override;

	float Width;
	float Height;

private:

	Texture2D texture;
	Image image;

};

