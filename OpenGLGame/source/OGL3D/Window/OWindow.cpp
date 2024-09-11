#include <OGL3D/Window/OWindow.h>
#include <Windows.h>
#include <assert.h>

OWindow::OWindow()
{
	WNDCLASSEX wc{};
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.lpszClassName = L"OGL3DWindow";
	wc.lpfnWndProc = DefWindowProc;

	assert(RegisterClassEx(&wc));

	RECT rc = { 0,0,1024,768 };
	AdjustWindowRect(&rc, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, false);

	handle = CreateWindowEx(NULL, L"OGL3DWindow", L"Maldron | OpenGL 3D Game", WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU,
		CW_USEDEFAULT, CW_USEDEFAULT, rc.right, rc.bottom, NULL, NULL, NULL, NULL);
	
	assert(handle);

	ShowWindow((HWND)handle, SW_SHOW);
	UpdateWindow((HWND)handle);

}

OWindow::~OWindow()
{
	DestroyWindow((HWND)handle);
}
