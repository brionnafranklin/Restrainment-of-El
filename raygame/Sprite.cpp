#include "Sprite.h"
#include "raymath.h"

Sprite::Sprite(char path[60])
{
    image = LoadImage(path);
    texture = LoadTextureFromImage(image);
    X = -Width / 2;
    Y = -Height / 2;
}

void Sprite::Draw()
{
	Vector2 drawThis();
	drawThis.y = YAbsolute();
	drawThis.x = XAbsolute();
    DrawTextureEx(
        texture,
		drawThis,
        GetRotation() * (float)(180.0f / PI),
        GetScale(),
        WHITE);
    base.Draw();
}
