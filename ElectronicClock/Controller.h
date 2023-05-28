#pragma once
#include "Clock.h"
#include "ClockDrawer.h"

class Controller
{
public:
	Controller();
	void run();

private:
	std::unique_ptr<Clock> clock;
	std::unique_ptr<ClockDrawer> drawer;
};