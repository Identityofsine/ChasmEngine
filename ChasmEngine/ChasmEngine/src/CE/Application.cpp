#include "Application.h"
#include <stdio.h>

namespace Chasm {
	
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::run() {
		this->wndw = Window();
		this->wndw.init();
		//start 3d renderer

		printf("ChasmEngine Started...");

		while (true);
	}



}