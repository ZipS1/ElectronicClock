#include "Controller.h"

Controller::Controller()
{
	clock = new Clock();
	drawer = new ClockDrawer();
}

void Controller::run()
{
	while (true)
	{
		clock->tick();
		drawer->setDigits(clock->getClockDigits());

		drawer->draw();
		std::this_thread::sleep_for(std::chrono::milliseconds(970));
	}
}

Controller::~Controller()
{
	delete clock;
	delete drawer;
}
