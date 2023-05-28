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
	time_t nowTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
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

std::unique_ptr<int[]> Clock::getClockDigits()
{
	std::unique_ptr<int[]> digits(new int[DIGITS_AMOUNT] {hours / 10, hours % 10, minutes / 10, minutes % 10, seconds / 10, seconds % 10});
	return digits;
}