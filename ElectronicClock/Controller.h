#pragma once
#include <thread>
#include "Clock.h"
#include "ClockDrawer.h"

class Controller
{
public:
	Controller();
	void run();
	~Controller();

private:
	Clock* clock;
	ClockDrawer* drawer;
};