#include "Clock.h"

Clock::Clock()
{
	tick();
}

void Clock::tick()
{
	time_t timeOfTime_t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	tm* time = localtime(&timeOfTime_t);
	hours = time->tm_hour;
	minutes = time->tm_min;
	seconds = time->tm_sec;
}

std::vector<int> Clock::getClockDigits()
{
	return std::vector<int> {hours / 10, hours % 10, minutes / 10, minutes % 10, seconds / 10, seconds % 10};
}