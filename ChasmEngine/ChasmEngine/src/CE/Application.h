#pragma once

#include "Core.h"
#include "Window.h"

namespace Chasm {

	class CHASM_API Application
	{

	public:
		Application();
		virtual ~Application();
		void run();
	protected:
		Window wndw;
	};
	// To be defined in CLIENT 
	Application* CreateApplication();
}


