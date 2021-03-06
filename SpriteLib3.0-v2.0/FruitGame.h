#pragma once

#include "Scene.h"
#include "PhysicsPlaygroundListener.h"
class FruitGame : public Scene
{
public:
	FruitGame(std::string name);

	void InitScene(float windowWidth, float windowHeight) override;

	void Update() override;

	//Input overrides
	void KeyboardHold() override;
	void KeyboardDown() override;
	void KeyboardUp() override;

protected:
	PhysicsPlaygroundListener listener;


};
