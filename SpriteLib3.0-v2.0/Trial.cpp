#include "Trial.h"
#include "ECS.h"

void Trial::OnEnter()
{
	Trigger::OnEnter();

	if (!triggered)
	{
		std::cout<<"hello";
	}
	else {
		std::cout<<"Goodbye";
		triggered=true;
	}
}

void Trial::OnExit()
{
	Trigger::OnExit();
}
