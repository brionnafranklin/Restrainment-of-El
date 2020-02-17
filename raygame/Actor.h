#pragma once
#include <raymath.h>
#include <list>
class Actor
{
public:
	Actor();
	
	~Actor();


	Actor* parent;

	std::list<Actor> Children;
	std::list<Actor> removals;
	std::list<Actor> additions;

	float X;
	float Y;

	float XAbsolute();
	
	float YAbsolute();
	float GetRotation();
	float GetScale();
	
	void AddChild(Actor child);
	void RemoveChild(Actor child);
	void UpdateTransform();

	
	virtual void Update();
	virtual void Start();
	virtual void Draw();

	bool started;


private:
	
	Matrix GlobalTransform;
	Matrix LocalTransform;
	
	

	
};

