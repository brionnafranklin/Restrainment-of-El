#include "Entity.h"





Entity::Entity()
{
}


Entity::~Entity()
{
}
Entity::Entity(float x, float y)
{
	X=x;
	Y=y;
}
void Entity::Update()
{
	//## Calculate velocity from acceleration ##//
 //accelerate a objects 
	XVelocity = XVelocity + XAcceleration * GetFrameTime();
	YVelocity = YVelocity + YAcceleration * GetFrameTime();
	//## Calculate position from velocity ##//
	//update position from position
	 X += XVelocity * GetFrameTime();
	 Y += YVelocity * GetFrameTime();
	
}

void Entity::setXVelocity(float value)
{
	XVelocity = value;
}

void Entity::setXAcceleration(float value)
{
	XAcceleration = value;
}

void Entity::setYVelocity(float value)
{
	YVelocity = value;
}

void Entity::setYAcceleration(float value)
{
	YAcceleration = value;
}

void Entity::Update()
{

	XVelocity = XVelocity + XAcceleration * GetFrameTime();
	YVelocity = YVelocity + YAcceleration * GetFrameTime();
	//## Calculate position from velocity ##//
	//update position from position
	X +=  XVelocity * GetFrameTime();
	Y +=  YVelocity * GetFrameTime();
	
}
