#pragma once
#include <memory>


class OWindow;

class OGame
{
public:
	OGame();
	~OGame();

	void run();
	void quit();
protected:
	bool isRunning = true;
	std::unique_ptr<OWindow> display = nullptr;
};

