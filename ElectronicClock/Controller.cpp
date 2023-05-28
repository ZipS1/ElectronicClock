#include "Controller.h"

Controller::Controller()
{
	clock = std::make_unique<Clock>();
	drawer = std::make_unique<ClockDrawer>();
}

void Controller::run()
{

}
