#pragma once
#include <vector>

class Trigger
{
public:
	//Depreciated use OnEnter and OnExit instead
	virtual void OnTrigger();

	virtual void OnEnter();
	virtual void OnExit();

	void SetTriggerEntity(int triggerEnt);
	int GetTriggerEntity();

	void AddTargetEntity(int entity);
	void SetTargetEntities(std::vector<int> entities);
	std::vector<int> GetTargetEntities();
protected:
	int m_triggerEntity;
	float scalar = 0;
	float fixtures = 0;
	float rotation = 0;
	std::string spriteScale;
	std::vector<int> m_targetEntities;
	std::vector<PhysicsBody> m_bodies;
	std::vector<int> m_targetX;
	std::vector<int> m_targetY;
	bool check = false;
};

