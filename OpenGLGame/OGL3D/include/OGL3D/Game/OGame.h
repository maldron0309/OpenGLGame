#pragma once



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
	OWindow* display = nullptr;
};

