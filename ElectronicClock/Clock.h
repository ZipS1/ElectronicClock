#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <chrono>
#include <ctime>
#include <vector>

class Clock
{
public:
	Clock();
	void tick();
	std::vector<int> getClockDigits();

private:
	int hours;
	int minutes;
	int seconds;
};