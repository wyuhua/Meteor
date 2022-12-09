#pragma once

#ifdef METEOR_PLATFORM_WINDOWS

extern Meteor::Application* Meteor::CreateApplication();

int main(int argc, char** argv)
{
	Meteor::Log::Init();
	ME_CORE_WARN("Initialized Log!");
	int a = 5;
	ME_INFO("Hello! Var={0}", a);

	printf("Meteor Engine");
	auto app = Meteor::CreateApplication();
	app->Run();
	delete app;
}


#endif