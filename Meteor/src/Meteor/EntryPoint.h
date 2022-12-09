#pragma once

#ifdef METEOR_PLATFORM_WINDOWS

extern Meteor::Application* Meteor::CreateApplication();

int main(int argc, char** argv)
{
	printf("Meteor Engine");
	auto app = Meteor::CreateApplication();
	app->Run();
	delete app;
}


#endif