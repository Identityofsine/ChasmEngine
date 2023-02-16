#include <ChasmEngine.h>

class ChasmGame : public Chasm::Application
{

public:
	ChasmGame() {

	}

	~ChasmGame() {

	}


};


Chasm::Application* Chasm::CreateApplication() {
	return new ChasmGame();
}