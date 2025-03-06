#pragma once
#include "Core.h"
namespace Episteme {

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}
