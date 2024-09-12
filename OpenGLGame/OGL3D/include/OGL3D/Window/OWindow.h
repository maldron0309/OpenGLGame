#pragma once

class OWindow
{
public:
	OWindow();
	~OWindow();

	void onDestroy();
	bool isClosed();
private:
	void* handle = nullptr;
};