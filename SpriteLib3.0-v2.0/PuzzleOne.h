#pragma once

#include "Scene.h"
#include "PhysicsPlaygroundListener.h"

class PuzzleOne: public Scene
{
public:
	PuzzleOne(std::string name);

	void InitScene(float windowWidth, float windowHeight) override;

	void Update() override;

	//Input overrides
	void KeyboardHold() override;
	void KeyboardDown() override;
	void KeyboardUp() override;

protected:
	PhysicsPlaygroundListener listener;

	int ball=0;
	int hexagon;
	int WallOne;
	int WallTwo;
	int HoverWall;
	int button;
	int ground;
	int cone1;
	int cone2;
	
	
};
