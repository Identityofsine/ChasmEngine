#include "Window.h"

#include <iostream>


namespace Chasm {

	Window* wndw = NULL;

	Window::Window() {
		//?
	}

	LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
		switch (msg) {
			case WM_CREATE:
			{
				//EVENT FIRED WHEN WINDOW CREATED
				//wndw->onCreate();
				break;
			}
			case WM_DESTROY:
			{
				//EVENT FIRED WHEN WINDOW DESTORYED
				//wndw->onDestory();
				::PostQuitMessage(0);
				break;
			}
			default: 
				return ::DefWindowProc(hwnd, msg, wparam, lparam);
		}
		return NULL;
	}

	bool Window::init() {
		printf("DirectX Window Started...");
		WNDCLASSEX wc = {0};
		wc.cbClsExtra = NULL;
		wc.cbSize = sizeof(wc);
		wc.cbWndExtra = NULL;
		wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
		wc.hCursor = LoadCursor(NULL, IDC_CROSS);
		wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
		wc.hInstance = NULL;
		wc.lpszClassName = "ChasmEngineWindow";
		wc.lpszMenuName = "";
		wc.style = NULL;
		wc.lpfnWndProc = WndProc;

		if (!::RegisterClassEx(&wc)) {
			return false;
		}

		m_hwndl = ::CreateWindowEx(WS_EX_OVERLAPPEDWINDOW, "ChasmEngineWindow", "Chasm Engine", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 1024, 768, NULL, NULL, NULL, NULL);

		if (!this->m_hwndl)
			return false;

		//TODO;
		//Create Window
		::ShowWindow(m_hwndl, SW_SHOW);
		::UpdateWindow(m_hwndl);

		if (wndw == NULL) {
			wndw = this;
		}

		return true;
	}


	bool Window::broadcast() {

		MSG msg;

		while (::PeekMessage(&msg, NULL, 0, 0, PM_REMOVE) > 0) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		//wndw->onUpdate();

		Sleep(0);

		return true;
	}

	bool Window::release() {
		if (m_hwndl) {
			::DestroyWindow(m_hwndl);
		}
		return true;
	}

	Window::~Window() {

	}

}