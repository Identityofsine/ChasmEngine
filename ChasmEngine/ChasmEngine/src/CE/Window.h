#include <Windows.h>
#pragma once

namespace Chasm {
	class Window {
	public:
		Window();
		bool init();
		bool broadcast();
		bool release();
		bool created;
		~Window();

		//virtual void onCreate() = 0;
		//virtual void onUpdate() = 0;
		//virtual void onDestory() = 0;

	protected:
		HWND m_hwndl;


	};
}