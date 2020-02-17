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

float Actor::GetRotation()
{
	return (float)std::atan2(GlobalTransform.m1, GlobalTransform.m0);
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

void Actor::Start()
{
	started = true;
}
