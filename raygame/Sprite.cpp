#include "Sprite.h"
#include "raymath.h"

Sprite::Sprite(char path[60])
{
    image = LoadImage(path);
    texture = LoadTextureFromImage(image);
    X = -Width / 2;
    Y = -Height / 2;
}
