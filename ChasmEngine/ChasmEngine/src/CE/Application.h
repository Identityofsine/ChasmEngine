#pragma once

#include "Core.h"

namespace Chasm {

	class CHASM_API Application
	{

	public:
		Application();
		virtual ~Application();
		void run();
	};

	// To be defined in CLIENT 
	Application* CreateApplication();
}


