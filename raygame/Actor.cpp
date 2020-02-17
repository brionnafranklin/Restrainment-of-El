#include "Actor.h"
#include<math.h>


Actor::Actor()
{
}


Actor::~Actor()
{
}

float Actor::XAbsolute()
{
	return GlobalTransform.m8;
}

float Actor::YAbsolute()
{
	return 0.0f;
}

float Actor::GetRotation()
{
	return (float)std::atan2(GlobalTransform.m1, GlobalTransform.m0);
}

float Actor::GetScale()
{
	return 0.0f;
}

void Actor::AddChild(Actor child)
{
	
	
		//## Implement AddChild(Actor) ##//
		if (child.parent != nullptr)
		{
			return;
		}

		child.parent = this;

		additions.push_front(child);

	
}

void Actor::RemoveChild(Actor child)
{
}

void Actor::UpdateTransform()
{
}

void Actor::Update()
{
}

void Actor::Start()
{
	started = true;
}

void Actor::Draw()
{
}
