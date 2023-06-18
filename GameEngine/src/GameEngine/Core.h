#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GAME_ENGINE_API _declspec(dllexport)
	#else
		#define GAME_ENGINE_API _declspec(dllimport)
	#endif
#else
	#error Game Engine only support Windows!
#endif



