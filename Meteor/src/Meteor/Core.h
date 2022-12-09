#pragma once

#ifdef METEOR_PLATFORM_WINDOWS
	#ifdef METEOR_BUILD_DLL
		#define METEOR_API __declspec(dllexport)
	#else		
		#define METEOR_API __declspec(dllimport)
	#endif
#else
	#error Meteor only support Windows!
#endif
