#include "Meteor.h"

class Sandbox : public Meteor::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{

	}
};

Meteor::Application* Meteor::CreateApplication()
{
	return new Sandbox();
}