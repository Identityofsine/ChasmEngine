#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern Chasm::Application* Chasm::CreateApplication();

int main(int argc, char** argv) {
	printf("Chasm Engine Running...");
	auto app = Chasm::CreateApplication();
	app->run();
	delete app;
}

#else
	#error CHASM ENGINE ONLY SUPPORTS WINDOWS!

#endif