#pragma once

#include "Core.h"

namespace Meteor {

	class METEOR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT 
	Application* CreateApplication();

}

