#include "Clock.h"

Clock::Clock()
{
	tick();
}

/// <summary>
/// Updates the information about current time
/// </summary>
void Clock::tick()
{
	time_t nowTime = system_clock::to_time_t(system_clock::now());
	tm* timeNow = localtime(&nowTime);
	this->hours = timeNow->tm_hour;
	this->minutes = timeNow->tm_min;
	this->seconds = timeNow->tm_sec;
}

int Clock::getHours()
{
	return hours;
}

int Clock::getMinutes()
{
	return minutes;
}

unique_ptr<int[]> Clock::getTimeDigits()
{
	unique_ptr<int[]> digits(new int[4] {hours / 10, hours % 10, minutes / 10, minutes % 10});
	return digits;
}
